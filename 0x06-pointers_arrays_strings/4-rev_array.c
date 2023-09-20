#include "main.h"

/**
  * reverse_array - reverses an array of integers
  * @a: array
  * @n: number of elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int index_start = 0;
	int index_end = n - 1;
	int rev_array;

	while (a[index_start] < a[index_end])
	{
		rev_array = a[index_start];
		a[index_start] = a[index_end];
		a[index_end] = rev_array;
		index_start++;
		index_end--;
	}
}
