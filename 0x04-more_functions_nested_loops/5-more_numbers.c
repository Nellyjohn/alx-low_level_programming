#include "main.h"

/**
  * more_numbers - prints numbers 10 times
  * Return: void
  */

void more_numbers(void)
{
	int numbers;
	int count;

	count = 0;
	while (count < 10)
	{
		numbers = 0;
		while (numbers <= 14)
		{
			_putchar(numbers + '0');
			numbers++;
		}
		_putchar('\n');
		count++;
	}
}
