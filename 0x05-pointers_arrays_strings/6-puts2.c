#include "main.h"

/**
  * puts2 - prints everyother character of a string
  * @str: string
  * Return: void
  */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index = index + 2;
	}

	_putchar('\n');
}
