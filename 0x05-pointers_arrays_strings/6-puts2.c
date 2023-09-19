#include "main.h"

/**
  * puts2 - prints everyother character of a string
  * @str: string
  * Return: void
  */

void puts2(char *str)
{
	int index;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	index = 0;
	while (index < length)
	{
		_putchar(str[index]);
		index = index + 2;
	}

	_putchar('\n');
}
