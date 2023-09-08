#include <stdio.h>

/**
  * main - main function
  * Return: 0 on success
  */

int main(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		if (number > 48 && number <= 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
