#include <stdio.h>

/**
  * main - main function
  * Return: 0 on success
  */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
