#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (*(src + length) != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	dest[length] = '\0';

	return dest;
}

