#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 *        followed by a new line.
 *        Except for the letters 'e' and 'q'.
 * Return: 0 (Success)
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
