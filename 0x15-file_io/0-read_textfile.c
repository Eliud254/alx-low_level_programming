#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print its content to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to read from the file.
 * Return: The actual number of bytes read and printed to STDOUT,
 *         or 0 when the function fails or when the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t f;
ssize_t m;
ssize_t u;

f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buf = malloc(sizeof(char) * letters);
u = read(f, buf, letters);
m = write(STDOUT_FILENO, buf, u);

free(buf);
close(f);
return (m);
}

