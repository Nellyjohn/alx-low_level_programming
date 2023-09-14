#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: size of the triangle
  * Return: void
  */

void print_triangle(int size)
{
	int row;
	int column;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = 0;
		while (row < size)
		{
			space = size - row;
			while (space > 1)
			{
				_putchar(' ');
				space--;
			}

			column = 0;
			while (column <= row)
			{
				_putchar('#');
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
