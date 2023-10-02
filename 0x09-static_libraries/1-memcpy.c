#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: memory area to copy to
  * @src: memory area to copy to
  * @n: number of bytes to copy
  * Return: pointer to the destination memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
