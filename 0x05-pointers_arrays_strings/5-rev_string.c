#include "main.h"

/**
  * rev_string - reverses string
  * @s: string
  * Return: void
  */

void rev_string(char *s)
{
	int length = 0;
	int index;
	char rev_s;

	while (s[length] != '\0')
	{
		length++;
	}

	index = 0;
	while (index < (length / 2))
	{
		rev_s = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = rev_s;
		index++;
	}
}
