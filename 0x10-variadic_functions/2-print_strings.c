#include "variadic_functions.h"

/**
  * print_strings - prints strings
  * @separator: separates the strings
  * @n: number of strings passed
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int index = 0;
	char *str;

	va_start(strings, n);

	while (index < n)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (index < n- 1 && separator != NULL)
			printf("%s", separator);

		index++;
	}
	va_end(strings);
	printf("\n");
}
