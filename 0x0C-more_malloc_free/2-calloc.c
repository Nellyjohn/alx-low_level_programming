#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of elements
  * @size: size of the array
  * Return: pointer to the new memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	index = 0;
	while (index < nmemb * size)
	{
		array[index] = 0;
		index++;
	}

	return (array);
}
