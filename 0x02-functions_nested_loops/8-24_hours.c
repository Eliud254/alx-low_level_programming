#include "main.h"

/**
 * Prints every minute of the day of Jack Bauer, from 00:00 to 23:59.
 */
void jack_bauer(void)
{
    int hour, minute;
    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            int tensHour = hour / 10;
            int onesHour = hour % 10;
            int tensMinute = minute / 10;
            int onesMinute = minute % 10;

            _putchar('0' + tensHour);
            _putchar('0' + onesHour);
            _putchar(':');
            _putchar('0' + tensMinute);
            _putchar('0' + onesMinute);
            _putchar('\n');
        }
    }
}

