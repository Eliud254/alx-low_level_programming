#include "main.h"

/**
 * create_file - Creates a file to write content to it.
 * @filename: The pointer to the name of the file to create.
 * @text_content: Pointer to the string to write to the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, m, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		{
			/* Code inside the loop (if any) should be indented properly. */
		}
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	m = write(f, text_content, len);
	if (m == -1)
	{
		close(f);
return (-1);
	}
	close(f);
	return (1);
}

