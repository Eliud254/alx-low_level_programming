#include "main.h"

/**
 * get_endianness - checks byte
 * Return: 0 = big endian, 1= little endian
 */
int get_endianness(void)
{
unsigned int value = 1;
char *byte_ptr = (char *) &value;
return (*byte_ptr == 1);
}

