#include "main.h"

/**
  * string_toupper - converts lowercase characters in a string to uppercse
  * @str: string
  * Return: changed string
  */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - ('a' - 'A');
		}
		index++;
	}
	return (str);
}
