#include "main.h"
/**
 *jack_bauer - print out time
 *Main: computes time in minutes and hours
 */

void jack_bauer(void)
{
int t_hour = 0;
int t_min = 0;
while (t_hour < 24)
{
while (t_min < 60)
{
_putchar('0' + (t_hour / 10));
_putchar('0' + (t_hour % 10));
_putchar(':');
_putchar('0' + (t_min / 10));
_putchar('0' + (t_min % 10));
_putchar('\n');
t_min++;
}
t_min = 0;
t_hour++;
}
}
