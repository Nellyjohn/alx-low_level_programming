#include "main.h"

/**
  * _memset - fills memeory with a constant byte
  * @s: pointer to the memory
  * @b: byte value to fill
  * @n: size of byte
  * Return: pointer to the memory
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}

	return (s);
}
