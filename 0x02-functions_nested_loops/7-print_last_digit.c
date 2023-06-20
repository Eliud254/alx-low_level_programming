#include "main.h"

/**
 * Prints the last digit of a number.
 *
 * @k :The number from which the last digit will be extracted.
 * Return:value of the last digit of number
 */

int print_last_digit(int r)
{
int last;
last = r % 10;

if (last < 0)
{
last = last * +1;
}
_putchar(last + '0');
return (last);
}
