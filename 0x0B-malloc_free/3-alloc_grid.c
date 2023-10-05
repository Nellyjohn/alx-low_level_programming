#include "main.h"
/**
  * alloc_grid - returns a pointer to a two dimensional array
  * @width: widtth
  * @height: height
  * Return: NULL or pointer
  */
int **alloc_grid(int width, int height)
{
	int i, k, l = 0;
	int j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	while (i < height)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			j = i;
			while (j >= 0)
			{
				free(array[j]);
				j--;
			}
			free(array);
			return (NULL);
		}
		i++;
	}
	k = 0;
	while (k < height)
	{
		l = 0;
		while (l < width)
		{
			array[k][l] = 0;
			l++;
		}
		k++;
	}
	return (array);
}
