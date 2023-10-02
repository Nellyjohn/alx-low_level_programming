#include "main.h"

/**
  * _strcpy - cpies string 1 to string 2
  * @dest: destination string
  * @src: source string
  * Return: a pointer to the copied string
  */

char *_strcpy(char *dest, char *src)
{
	int dest_index = 0;
	int src_index = 0;

	while (src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}

	dest[dest_index] = '\0';

	return (dest);
}
