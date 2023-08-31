#include "main.h"

/**
 * flip_bits - counts the number
 *of bits needed to change from n to m
 * @n:1 number
 * @m:2 number
 *
 * This function calculates the number of bits
 *that need to be flipped in order
 * to transform one unsigned long integer
 *(n) into another unsigned long integer (m).
 *
 * Return: Number of bits to change from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int bit_position;
    unsigned int count = 0;
    unsigned long int current;
    unsigned long int exclusive = n ^ m;

    for (bit_position = 0; bit_position < 64; bit_position++)
    {
        current = exclusive >> bit_position;
        if (current & 1)
            count++;
    }

    return (count);
}

