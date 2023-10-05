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
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			array[k][l] = 0;
		}
	}
	return (array);
}
