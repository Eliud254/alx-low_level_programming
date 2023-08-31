#include "main.h"

/**
 * set_bit - Sets the bit at a given index to 1
 * @n: Pointer to the number in which to set the bit
 * @index: Index of the bit to set to 1
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

