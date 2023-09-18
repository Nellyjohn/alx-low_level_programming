#include "main.h"

/**
  * print_array - prints elements in an arrayu
  * @a: pointer to array
  * @n: n elements
  * Return: void
  */

void print_array(int *a, int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		printf("%d", a[index]);
		index++;

		if (index <= n - 1)
			printf(", ");
	}
	printf("\n");
}
