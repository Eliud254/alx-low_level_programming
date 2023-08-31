#include "main.h"

/**
 * get_bit - Returns the value of a bit at
 *a given index in a decimal number
 * @n: Number to search
 * @index: Index of the bit
 *
 * Return: Value of the bit at the given index,
 *         or -1 if the index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;

if (index > 63)
return (-1);

bit_value = (n >> index) & 1;

return (bit_value);
}

