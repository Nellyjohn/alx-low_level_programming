#include "main.h"

/**
  * print_array - prints elements in an arrayu
  * @a: pointer to array
  * @n: n elements
  * Return: void
  */

void print_array(int *a, int n)
{
	n = 0;
	while (a[n] != '\0')
	{
		printf("%d", a[n]);
		n++;

		if (a[n] != '\0')
			printf(", ");
	}
	printf("\n");
}
