#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: On success, 1. On failure, -1.
 *         If the file does not exist or the user lacks write permissions, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, write_result, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len]; len++)
{
 /* Code inside the loop (if any) should be indented properly. */
}
}

file_descriptor = open(filename, O_WRONLY | O_APPEND);
write_result = write(file_descriptor, text_content, len);

if (file_descriptor == -1 || write_result == -1)
return (-1);

close(file_descriptor);

return (1);
}

