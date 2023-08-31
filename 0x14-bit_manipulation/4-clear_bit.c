#include "main.h"

/**
 * clear_bit - sets value of  given bit = 0
 * @n: pointer to the number to modify
 * @index: index of bit to be clear
 *
 * This function takes a pointer to
 * an unsigned long integer and an index.
 * It clears the bit at the specified
 *index in the integer by using bitwise
 * operations, ensuring that the rest
 *of the bits remain unchanged.
 *
 * Return: 1 when success, -1 if not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}

*n = (~(1UL << index) & *n);

return (1);
}

