#include "main.h"

/**
  * _islower - checks for lowercase character
  * Return: 1 if character is lowercase and 0 otherwise
  */

int _islower(int c)
{
	char loweralpha;

	loweralpha = 'a';
	while(loweralpha <= 'z')
	{
		if (c == loweralpha)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		loweralpha++;
	}
	_putchar('\n');

	return (0);
}
