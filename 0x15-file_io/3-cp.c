#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - Checks if files can be opened and exits
 *with an error message if not.
 * @file_from: File descriptor for the source file.
 * @file_to: File descriptor for the destination file.
 * @argv: Arguments vector.
 *
 * This function checks if files can be opened and
 * exits the program with
 * an error message if an open operation fails.
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(EXIT_FAILURE);
}
}

/**
 * main - Copies the contents of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Arguments vector of the file.
 *
 * Return: Always returns 0 on success.
 *
 * Description: Exits with specific error codes
 *in case of incorrect arguments
 *or file operation failures.
 */
int main(int argc, char *argv[])
{
int source_fd, dest_fd, close_result;
ssize_t read_chars, write_chars;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(EXIT_FAILURE);
}

source_fd = open(argv[1], O_RDONLY);
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(source_fd, dest_fd, argv);

read_chars = 1024;
while (read_chars == 1024)
{
read_chars = read(source_fd, buffer, 1024);
if (read_chars == -1)
error_file(-1, 0, argv);
write_chars = write(dest_fd, buffer, read_chars);
if (write_chars == -1)
error_file(0, -1, argv);
}

close_result = close(source_fd);
if (close_result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close source file descriptor\n");
exit(EXIT_FAILURE);
}

close_result = close(dest_fd);
if (close_result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close destination file descriptor\n");
exit(EXIT_FAILURE);
}

return (EXIT_SUCCESS);
}
