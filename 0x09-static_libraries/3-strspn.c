#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: string1
  * @accept: strimg2
  * Return: number of characters in substring
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int s_index = 0;
	unsigned int accept_index;

	while (s[s_index] != '\0')
	{
		accept_index = 0;
		while (accept[accept_index] != '\0')
		{
			if (s[s_index] == accept[accept_index])
			{
				count++;
				break;
			}
			accept_index++;
		}
		if (accept[accept_index] == '\0')
			break;
		s_index++;
	}
	return (count);
}
