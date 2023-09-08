#include <stdio.h>

/**
  * main - main function
  * Return: 0 on success
  */

int main(void)
{
	char loweralpha;

	loweralpha = 'z';
	while (loweralpha >= 'a')
	{
		putchar(loweralpha);
		loweralpha--;
	}
	putchar('\n');

	return (0);
}
