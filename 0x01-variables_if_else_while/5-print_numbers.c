#include <stdio.h>

/**
  * main - main function
  * Return: 0 on success
  */

int main(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
