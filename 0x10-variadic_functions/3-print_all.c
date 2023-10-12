#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: list of arguments types
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list args;
	int index;
	char *s;
	char *separator = "";

	va_start(args, format);
	index = 0;
	while (format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
		}
		if (index < 3)
		{
			printf("%s", separator);
			separator = ", ";
		}
		index++;
	}
	va_end(args);
	printf("\n");
}
