#include "main.h"

/**
  * reverse_array - reverses an array of integers
  * @a: array
  * @n: number of elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int index = 0;
	int rev_array;

	while (index < (n / 2))
	{
		rev_array = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = rev_array;
		index++;
	}
}
