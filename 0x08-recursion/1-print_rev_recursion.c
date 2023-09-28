#include "main.h"

/**
  * _print_rev_recursion - prints a string recursivly in reverse
  * @s: string
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	int index = 0;

	if (s[index] == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[index]);
	}
}
