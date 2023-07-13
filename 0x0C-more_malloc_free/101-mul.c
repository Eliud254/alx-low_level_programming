#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);

#endif

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

int is_digit(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int _strlen(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

void errors(void)
{
    printf("Error\n");
    exit(98);
}

int main(int argc, char *argv[])
{
    char *s1, *s2;
    int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

    s1 = argv[1], s2 = argv[2];
    if (argc != 3 || !is_digit(s1) || !is_digit(s2))
        errors();
    len1 = _strlen(s1);
    len2 = _strlen(s2);
    len = len1 + len2 + 1;
    result = malloc(sizeof(int) * len);
    if (!result)
        return (1);
    for (i = 0; i <= len1 + len2; i++)
        result[i] = 0;
    for (len1 = len1 - 1; len1 >= 0; len1--)
    {
        digit1 = s1[len1] - '0';
        carry = 0;
        for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
        {
            digit2 = s2[len2] - '0';
            carry += result[len1 + len2 + 1] + (digit1 * digit2);
            result[len1 + len2 + 1] = carry % 10;
            carry /= 10;
        }
        if (carry > 0)
            result[len1 + len2 + 1] += carry;
    }
    for (i = 0; i < len - 1; i++)
    {
        if (result[i])
            a = 1;
        if (a)
            _putchar(result[i] + '0');
    }
    if (!a)
        _putchar('0');
    _putchar('\n');
    free(result);
    return (0);
}

