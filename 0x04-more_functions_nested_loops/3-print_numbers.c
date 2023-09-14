#include "main.h"

/**
  * print_numbers - prints numbers from 0 t0 9
  * Return: void
  */

void print_numbers(void)
{
	int numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}
