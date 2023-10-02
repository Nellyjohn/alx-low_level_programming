#include "main.h"

/**
  * _strpbrk - searches a string for any set of bytes
  * @s: string 1
  * @accept: string 2
  * Return: pointer to the matched byte or NULL
  */

char *_strpbrk(char *s, char *accept)
{
	int index1 = 0;
	int index2;

	while (s[index1] != '\0')
	{
		index2 = 0;
		while (accept[index2] != '\0')
		{
			if (s[index1] == accept[index2])
			{
				return (&s[index1]);
			}
			index2++;
		}
		index1++;
	}
	return (NULL);
}
