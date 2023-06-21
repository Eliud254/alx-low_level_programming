#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: the starting number
 */
void print_to_98(int n)
{
    int k;

    if (n <= 98)
    {
        for (k = n; k <= 98; k++)
        {
            if (k != 98)
                printf("%d, ", k);
            else
                printf("%d\n", k);
        }
    }
    else
    {
        for (k = n; k >= 98; k--)
        {
            if (k != 98)
                printf("%d, ", k);
            else
                printf("%d\n", k);
        }
    }
}

