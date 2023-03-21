#include "main.h"

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours ;
	int min ;
	for (hours = 0 ; hours < 24 ; hours++)
	{
		for (hours = 0 ; min < 60 ; min++)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
		min = 0;
	}
}
