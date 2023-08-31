#include "main.h"

/**
 * set_bit - Sets  bit at  given index = 1
 * @n: Pointer to the number in which to set the bit
 * @index: Index of bit to set = 1
 *
 * Return: 1 on success, -1 on failure
 *(if index is out of range)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}

