#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @num: The integer for which the absolute value will be computed.
 * Return: The absolute value of the input integer.
 */
int _abs(int num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

