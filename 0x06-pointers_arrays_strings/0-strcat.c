#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int src_index = 0;
	int dest_index = 0;

	while (dest[dest_index] != '\0')
		dest_index++;

	while (src[src_index] != '\0')
	{
		dest[dest_index++] = src[src_index++];
	}

	dest[dest_index] = '\0';

	return (dest);
}
