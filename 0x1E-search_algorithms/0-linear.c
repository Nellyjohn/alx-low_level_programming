#include "search_algos.h"

/**
  * linear_search - searches for a value in an array of integers
  * using the Linear search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index where value is located,
  * NULL if value is not present in array or if array is null
  */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	index = 0;
	while (index < size)
	{
		printf("Value checked [%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);

		index++;
	}
	return (-1);
}
