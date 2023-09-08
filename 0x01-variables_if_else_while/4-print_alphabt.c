#include <stdio.h>

/**
  * main - main function
  * Return: 0 on success
  */

int main(void)
{
	char loweralpha;

	loweralpha = 'a';
	while (loweralpha <= 'z')
	{
		if (loweralpha != 'q' && loweralpha != 'e')
			putchar(loweralpha);

		loweralpha++;
	}
	putchar('\n');

	return (0);
}
