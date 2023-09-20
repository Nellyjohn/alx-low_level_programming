#include "main.h"

/**
  * leet - implements 1337 to a string
  * @str: string
  * Return: encoded string
  */

char *leet(char *str)
{
	char lowerletters[6] = {'a', 'e', 'o', 't', 'l'};
	char upperletters[6] = {'A', 'E', 'O', 'T', 'L'};
	char digits[6] = {'4', '3', '0', '7', '1'};
	int index;
	int index2;

	index = 0;
	while (str[index] != '\0')
	{
		index2 = 0;
		while (lowerletters[index2] != '\0' && upperletters[index2] != '\0')
		{
			if (str[index] == upperletters[index2] ||
					str[index] == lowerletters[index2])
			{
				str[index] = digits[index2];
				break;
			}
			index2++;
		}
		index++;
	}
	return (str);
}
