#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if it can't be found in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t end, start, index;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		index = start;
		while (index <= end)
		{
			printf("%d", array[index]);
			if (index < end)
				printf(", ");
			index++;
		}
		printf("\n");

		index = start + (end - start) / 2;
		if (array[index] == value)
			return (index);

		if (array[index] > value)
			end = index - 1;
		else
			start = index + 1;
	}
	return (-1);
}
