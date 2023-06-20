#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 if it is a lowercase character, 0 otherwise
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    return (0);
}

