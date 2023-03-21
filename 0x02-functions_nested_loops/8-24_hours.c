include "main.h"

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours;
	int min;
	for (hours = 0 ; hours <= 23 ; hours++)
	{
		for (hours = 0 ; min <= 59 ; min++)
		{
			putchar((hours / 10) + 48);
			putchar((hours % 10) + 48);
			putchar(':');
			putchar((min / 10) + 48);
			putchar((min % 10) + 48);
			putchar('\n');
			_putchar('\n');
		}
		min = 0;
	}
