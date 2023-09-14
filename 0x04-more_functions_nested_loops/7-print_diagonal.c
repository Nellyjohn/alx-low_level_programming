#include "main.h"

/**
  * print_diagonal - draws a diagonnal line
  * @n: number of times
  * Return: void
  */

void print_diagonal(int n)
{
	int count;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		count = 0;
		while (count < n)
		{
			space = 0;
			while (space < count)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
}
