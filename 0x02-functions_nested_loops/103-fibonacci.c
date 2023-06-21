#include <stdio.h>

/**

main - Prints the sum of the even-valued Fibonacci numbers

Return: Always 0.
*/
int main(void)
{
long int L1 = 1, L2 = 2, fn, sum = 0;

while (L1 <= 4000000)
{
if (L1 % 2 == 0)
sum += L1;
fn = L1 + L2;
L1 = L2;
L2 = fn;
}

printf("%ld\n", sum);
return 0;
}
