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
	int index2;

	while (haystack[index] != '\0')
	{
		index2 = 0;
		while (needle[index2] != '\0')
		{
			if (haystack[index + index2] != needle[index2])
			{
				break;
			}

			index2++;
		}
		if (needle[index2] == '\0')
		{
			return (&haystack[index]);
		}
		index++;
	}
	return (NULL);
}
