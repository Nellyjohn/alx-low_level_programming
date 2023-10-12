#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: function pointer to int_index
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		while (index < size)
		{
			if (cmp(array[index]) != 0)
				return (index);
			index++;
		}
	}
	return (-1);
}
