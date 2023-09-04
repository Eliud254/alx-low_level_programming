#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * error_file - Checks if files can be opened.
 * @file_from: File descriptor for the source file.
 * @file_to: File descriptor for the destination file.
 * @argv: Arguments vector.
 *
 * This function checks if files can be opened and exits the program with
 * an error message if an open operation fails.
 */
void error_file(int file_from, int file_to, char *argv[])
{
    if (file_from == -1)
    {
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
 * main - Copies the contents of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Arguments vector.
 *
 * Return: Always returns 0 on success.
 *
 * Description: Exits with specific error codes in case of incorrect arguments
 *              or file operation failures.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, err_close;
    ssize_t nchars, nwr;
    char buf[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
    error_file(file_from, file_to, argv);

    nchars = 1024;
    while (nchars == 1024)
    {
        nchars = read(file_from, buf, 1024);
        if (nchars == -1)
            error_file(-1, 0, argv);
        nwr = write(file_to, buf, nchars);
        if (nwr == -1)
            error_file(0, -1, argv);
    }

    err_close = close(file_from);
    if (err_close == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    err_close = close(file_to);
    if (err_close == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return (0);
}

