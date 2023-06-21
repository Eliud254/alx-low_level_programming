#include <stdio.h>

/**

main - Prints the sum of the Fibonacci numbers

Return: Always 0.
*/
int main(void)
{
int k;
long int L1, L2, fn;

L1 = 1;
L2 = 2;
printf("%ld, %ld", L1, L2);
for (k = 0; k < 48; k++)
{
fn = L1 + L2;
printf(", %ld", fn);
L1 = L2;
L2 = fn;
}
printf("\n");
return 0;
}
