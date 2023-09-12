#include "main.h"

/**
  * print_alphabet - prints the alphabet in lowercase
  * Return: void
  */

void print_alphabet(void)
{
	char loweralpha;

	loweralpha = 'a';
	while (loweralpha <= 'z')
	{
		_putchar(loweralpha);
		loweralpha++;
	}
	_putchar('\n');
}
