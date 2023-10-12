#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: string that separates numbers
  * @n: number of integeres passed
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index;
	unsigned int num = 0;

	va_start(numbers, n);

	index = 0;
	while (index < n)
	{
		num = va_arg(numbers, int);
		printf("%d", num);

		if (index < n - 1 && separator != NULL)
			printf("%s", separator);

		index++;
	}
	va_end(numbers);
	printf("\n");
}
