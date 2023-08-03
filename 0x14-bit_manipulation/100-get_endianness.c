#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Description: This function checks whether the machine is little-endian
 *              or big-endian by examining the memory representation of an
 *              unsigned integer. It returns 1 for little-endian and 0 for
 *              big-endian.
 *
 * Return: 1 for little-endian, 0 for big-endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ch = (char *)&i;

	return (*ch);
}

