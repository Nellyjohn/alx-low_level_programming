#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: negative, positive or 0
  */

int _strcmp(char *s1, char *s2)
{
	int index;

	if (s1 == NULL || s2 == NULL)
		return (-1);

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}
