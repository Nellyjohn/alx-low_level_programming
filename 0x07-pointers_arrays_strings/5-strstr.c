#include "main.h"

/**
  * _strstr - locates a substring in a string
  * @haystack: string to search
  * @needle: substring to search for
  * Return: address of the substring or NULL
  */

char *_strstr(char *haystack, char *needle)
{
	int index = 0;
	int needle_index;

	while (haystack[index] != '\0')
	{
		needle_index = 0;
		while (needle[needle_index] != '\0')
		{
			if (haystack[index] == needle[needle_index])
			{
				return (&haystack[index]);
			}
			else
			{
				break;
			}

			needle_index++;
		}
		index++;
	}

	return (NULL);
}
