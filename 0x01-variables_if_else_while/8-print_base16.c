#include <stdio.h>

/**
  * main - main function
  * Return: 0 on success
  */

int main(void)
{
	int digit;
	char loweralpha;

	digit = 48;
	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	loweralpha = 'a';
	while (loweralpha <= 'f')
	{
		putchar(loweralpha);
		loweralpha++;
	}
	putchar('\n');

	return (0);
}
