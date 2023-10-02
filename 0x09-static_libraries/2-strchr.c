#include "main.h"

/**
  * _strchr - returns a character in a string
  * @s: string
  * @c: character
  * Return: pointer to the character or NULL
  */

char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] >= '\0')
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
		index++;
	}
	return (NULL);
}
