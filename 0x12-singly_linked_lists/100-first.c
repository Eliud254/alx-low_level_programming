#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - Function executed automatically before main()
 *
 * This function is automatically executed before the main function
 * is called when the program starts. It prints a sentence to the
 * standard output to showcase its execution.
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
