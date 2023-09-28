#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int index = 0;

	if (s[index] != '\0')
	{
		_putchar(s[index]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
