#include "main.h"

/**
  * create_array - creates an array of characetres and initializes it
  * with a specific character
  * @size: no of elements in the array
  * @c: character to initialize array with
  * Return: pointer to array if successful or NULL
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	index = 0;
	while (index < size)
	{
		array[index] = c;
		index++;
	}

	return (array);
}
