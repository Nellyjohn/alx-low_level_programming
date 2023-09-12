#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet 10 times
  * Return: void
  */

void print_alphabet_x10(void)
{
	char loweralpha;
	int count;

	count = 0;
	while (count < 10)
	{
		loweralpha = 'a';
		while (loweralpha <= 'z')
		{
			_putchar(loweralpha);
			loweralpha++;
		}
		_putchar('\n');
		count++;
	}
}
