#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	if ( n == 0)
	{
		_putchar(48);
	}
	else
	{
		n = n + 1;
		while (n >= 0)
		{
			_putchar(n);
			n++;
		}
	}
}
