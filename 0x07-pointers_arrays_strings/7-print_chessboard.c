#include "main.h"

/**
  * print_chessboard - prints a chessboard
  * @a: array of chessbord
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
	int row_index;
	int column_index;

	row_index = 0;
	while (row_index < 8)
	{
		column_index = 0;
		while (column_index < 8)
		{
			_putchar(a[row_index][column_index]);
			column_index++;
		}
		row_index++;
		_putchar('\n');
	}
}
