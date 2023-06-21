#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: number times table (0 < n <= 15)
 * Return: no return
 */
void print_times_table(int n)
{
    int m, i, o;

    if (n >= 0 && n <= 15)
    {
        for (m = 0; m <= n; m++)
        {
            _putchar(48);
            for (i = 1; i <= n; i++)
            {
                o = m * i;
                _putchar(44);
                _putchar(32);
                if (o <= 9)
                {
                    _putchar(32);
                    _putchar(32);
                    _putchar(o + 48);
                }
                else if (o <= 99)
                {
                    _putchar(32);
                    _putchar((o / 10) + 48);
                    _putchar((o % 10) + 48);
                }
                else
                {
                    _putchar(((o / 100) % 10) + 48);
                    _putchar(((o / 10) % 10) + 48);
                    _putchar((o % 10) + 48);
                }
            }
            _putchar('\n');
        }
    }
}

