#include <stdio.h>

/**
  * main - main function
  * Return: 0 on success
  */

int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 48; digit1 <= 55; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 56; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 57; digit3++)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);

				if (digit1 == 55 && digit2 == 56 && digit3 == 57)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
