include "main.h"

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;
	while (hours <= 23)
	{
		while (min <= 59)
		{
			putchar((hours / 10) + 48);
			putchar((hours % 10) + 48);
			putchar(':');
			putchar((min / 10) + 48);
			putchar((min % 10) + 48);
			putchar('\n');
			_putchar('\n');
			min++;
		}
		min = 0;
		hours++;
	}
