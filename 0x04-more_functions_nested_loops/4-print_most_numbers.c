#include "main.h"

/**
  * print_most_numbers - prints numbers from 0 to 9
  * Return: void
  */

void print_most_numbers(void)
{
	int numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		if (numbers != 50 && numbers != 52)
			_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}
