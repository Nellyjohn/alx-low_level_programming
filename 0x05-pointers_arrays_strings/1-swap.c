#include "main.h"

/**
  * swap_int -swaps the value of two integers
  * @a: fistr integer
  * @b: second integer
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
