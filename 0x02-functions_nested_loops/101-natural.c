#include <stdio.h>

/**

main - Prints the sum of natural numbers below 1024 that are multiples of 3 or 5

Return: Always 0.
*/
int main(void)
{
int a, sum;

for (a = 1; a < 1024; a++)
{
if ((a % 3) == 0 || (a % 5) == 0)
sum += a;
}
printf("%d\n", sum);
return 0;
}
