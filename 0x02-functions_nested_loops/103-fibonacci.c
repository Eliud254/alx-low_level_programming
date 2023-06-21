
#include <stdio.h>

/**

main - Prints the sum of the even Fibonacci numbers

Return: Always 0.
*/
int main(void)
{
int k;
long int L1, L2, fn;
long int afn = 0;

L1 = 1;
L2 = 2;
if ((L1 % 2) == 0)
{
afn += L1;
}
if ((L2 % 2) == 0)
{
afn += L2;
}
for (k = 0; k < 48; k++)
{
fn = L1 + L2;
L1 = L2;
L2 = fn;
if ((L2 % 2) == 0)
{
afn += L2;
}
}
printf("%ld\n", afn);
return 0;
}
