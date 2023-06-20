#include "main.h"

/**
 * Prints the last digit of a number.
 *
 * @param n The number from which the last digit will be extracted.
 * Return: Value of the last digit of the number.
 */
int print_last_digit(int n) {
    int last = n % 10;

    if (last < 0) {
        last = -last;
    }

    _putchar(last + '0');

    return last;
}
