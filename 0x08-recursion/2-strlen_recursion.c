#include "main.h"

/**
  * _strlen_recursion - recursively returms the lenmgth of a string
  * @s: string
  * Return: length of string
  */

int _strlen_recursion(char *s)
{
	int index = 0;

	if (s[index] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
