#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all single digit numbers base
 * 10 starting from 0,
 * followed by a new line using putchar
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
