#include "main.h"

/**
  * print_line - draws a straight line
  * @n: number of _
  * Return: void
  */

void print_line(int n)
{
	int count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
