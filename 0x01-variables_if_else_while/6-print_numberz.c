#include <stdio.h>

/**
  * main - main function
  * Return: 0 on success
  */

int main(void)
{
	int digit;

	digit = 48;
	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
