#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: String containing the binary number
 *
 * Return: The converted number as an unsigned int,
 *         or 0 if input is invalid or NULL
 */
unsigned int binary_to_uint(const char *b)
{
int index;
unsigned int val = 0;

if (!b)

return (0);

for (index = 0; b[index]; index++)

{
if (b[index] < '0' || b[index] > '1')

return (0);

val = 2 * val + (b[index] - '0');
}

return (val);
}

