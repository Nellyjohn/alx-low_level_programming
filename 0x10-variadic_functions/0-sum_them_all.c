#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all parameters
  * @n: first parameter
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int sum = 0;
	unsigned int index;

	va_start(add, n);

	if (n == 0)
		return (0);
	index = 0;
	while (index < n)
	{
		sum = sum + va_arg(add, int);
		index++;
	}

	va_end(add);
	return (sum);
}
