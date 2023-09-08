#include <stdio.h>
/**
  * main - main function
  * Return: 0 on success
  */

int main(void)
{
	int firstdigit;
	int secondigit;

	for (firstdigit = 48; firstdigit <= 57; firstdigit++)
	{
		for (secondigit = firstdigit + 1; secondigit <= 57; secondigit++)
		{
			putchar(firstdigit);
			putchar(secondigit);

			if (firstdigit < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
