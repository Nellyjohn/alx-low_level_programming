#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer
 * Return: integer value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = _abs(n);
	}
	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
