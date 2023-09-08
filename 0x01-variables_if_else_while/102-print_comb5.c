#include <stdio.h>

/**
  * main- main function
  * Return: 0 on success
  */

int main(void)
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = 48; digit2 <= 56; digit2++)
		{
			for (digit3 = 48; digit3 <= 57; digit3++)
			{
				for (digit4 = digit3 + 1; digit4 <= 57; digit4++)
				{
					putchar(digit1);
					putchar(digit2);
					putchar(digit3);
					putchar(digit4);

					if (digit2 != 56 || digit3 != 57 || digit4 != 57)
					{
						putchar(' ');
					}

					if (digit4 != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
