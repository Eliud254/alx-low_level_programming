#include "main.h"

/**
 * Time -prints the 9 times table, starting with 0
 */
void times_table(void)
{
    int j, k, l;

    for (j = 0; j <= 9; j++) {
        for (k = 0; k <= 9; k++) {
            l = j * k;

            if (l > 9) {
                _putchar((l / 10) + '0');
                _putchar((l % 10) + '0');
            } else {
                _putchar(l + '0');
            }

            if (k != 9) {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}

