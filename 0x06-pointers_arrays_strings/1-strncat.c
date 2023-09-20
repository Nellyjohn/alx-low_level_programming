#include "main.h"

/**
  * _strncat - concatenates two strings with n bytes
  * @dest: first string
  * @src: second string
  * @n: number of characters to append
  * Return: pointer to the destination string
  */

char *_strncat(char *dest, char *src, int n)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index] != '\0')
		dest_index++;

	while (src_index < n && src[src_index] != '\0')
	{
		dest[dest_index + src_index] = src[src_index];
		src_index++;
	}
	dest[dest_index + src_index] = '\0';

	return (dest);
}
