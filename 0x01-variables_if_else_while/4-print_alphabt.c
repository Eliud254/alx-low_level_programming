#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line 
 *Except q and q and e
 * Return: 0 (Sucess)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z') 
{       
if (ch != 'e' && ch != 'q') 
{       
	putchar(ch);
}       
	ch++;   
}       
	putchar('\n');
return (0);
}
