#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: number of bytes
  * Return: ptr to the newly allocated memory
  */
void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
