#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *error_file - Checks if files can be opened and
 *exits with an error message if not.
 * @file_from: descriptor for the source file.
 * @file_to: descriptor for the destination file.
 * @argv: Arguments vector of the file.
 *
 *This function checks if files can
 *be opened and exits the program with
 *an error message if an open operation fails.
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
}
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * main - Copies contents.
 * @argc: command-line arguments number
 * @argv: Arguments vector of the file
 *
 * Return: returns 0 always when success
 *
 * Description: Exits with specific error codes
 * in case of incorrect arguments
 * or file operation failures.
 */
int main(int argc, char *argv[])
{
int source_fd, dest_fd, close_result;
ssize_t read_chars, write_chars;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

source_fd = open(argv[1], O_RDONLY);
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
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
exit(100);
}

close_result = close(dest_fd);
if (close_result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close destination file descriptor\n");
exit(100);
}

return (0);
}

