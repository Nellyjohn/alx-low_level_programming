#include "main.h"

/**
  * jack_bauer - that prints every minute of the day of Jack Bauer
  * Return: void
  */

void jack_bauer(void)
{
	int hour;
	int min;

	hour = 0;
	while (hour <= 23)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
	
		min = 0;
		while (min <= 59)
		{
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');

			if ((min + 1) <= hour)
			{
				_putchar(':');
				_putchar('\n');
			}
			min++;
		}
		_putchar('\n');


		hour++;
	}
}
