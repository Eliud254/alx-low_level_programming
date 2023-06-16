#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -prints all possible different combinations of two digits.
 * Return:0 Success
 */
int main(void)
{
int p, k;
for (p = 48; p <= 56; p++)
{
for (k = 49; k <= 57; k++)
{
if (k > p)
{
putchar(p);
putchar(k);
if (p != 56 || k != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
