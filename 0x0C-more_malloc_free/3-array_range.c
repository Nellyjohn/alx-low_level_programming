#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: first element
  * @max: last element
  * Return: pointer to the new array
  */
int *array_range(int min, int max)
{
	int *array;
	int index;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	index = 0;
	while (min <= max)
	{
		array[index] = min;
		min++;
		index++;
	}

	return (array);
}
