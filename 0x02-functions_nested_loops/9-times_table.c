#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int count = 0;
	int num = 9;
	int counter = 0;
	int times = count * counter;

	for (count = 0; count <= num; count++)
	{
		for (counter = 0; counter <= num; counter++);
		{
			_putchar(times + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
