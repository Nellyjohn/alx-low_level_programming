#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s: string
  * Return: reversed string
  */

void print_rev(char *s)
{
	int index = 0;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	index = length - 1;
	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
