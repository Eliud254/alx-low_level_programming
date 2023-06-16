#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main  -prints all possible combinations of single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int k;
for (k = 48; k < 58; k++)
{
	putchar(k);
if (k != 57)
{
	putchar(',');
	putchar(' ');
}
	putchar('\n');
return(0);
}
