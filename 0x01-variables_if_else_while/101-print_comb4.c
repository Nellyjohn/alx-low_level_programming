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
		for (digit2 = 49; digit2 <= 56; digit2++)
		{
			for (digit3 = 50; digit3 <= 57; digit3++)
			{
				if (digit3 <= 57)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(digit3);
			}
			putchar(digit2);
		}
		putchar(digit1);
	}
	putchar('\n');

	return (0);
}
