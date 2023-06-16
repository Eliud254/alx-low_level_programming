#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return:  0 =success
 */
int main(void)
{
int p, k;
for (p = 0; k < 100; p++)
{
for (k = 0; k < 100; k++)
{
if (p < k)
{
	putchar((p / 10) + 48);
	putchar((p % 10) + 48);
	putchar(' ');
	putchar((k / 10) + 48);
	putchar((k % 10) + 48);
if (p != 98 || k != 99)
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
return(0);
}
