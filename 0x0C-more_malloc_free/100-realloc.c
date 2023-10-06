#include "main.h"

/**
  * _realloc - reallocates a memory block
  * @ptr: old memory
  * @old_size: size of ptr
  * @new_size: size of the new memory
  * Return: pointer to new memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int index;
	char *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}

	old_ptr = ptr;
	index = 0;
	while (index < old_size)
	{
		new_ptr[index] = old_ptr[index];
		index++;
	}
	free(old_ptr);

	return (new_ptr);
}
