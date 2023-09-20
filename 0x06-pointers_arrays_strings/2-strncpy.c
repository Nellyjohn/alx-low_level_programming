#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: first string
  * @src: source string
  * @n: number of characters to copy
  * Return: pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
