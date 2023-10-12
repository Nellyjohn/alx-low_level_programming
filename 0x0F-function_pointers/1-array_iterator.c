#include "function_pointers.h"

/**
 * array_interator - prints an array using function pointers
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	if (array && action)
	{
		while (index < size)
		{
			action(array[index]);
			index++;
		}
	}
}
