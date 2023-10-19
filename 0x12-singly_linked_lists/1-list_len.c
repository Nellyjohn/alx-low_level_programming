#include "lists.h"

/**
  * list_len - prints the number of elements in a list
  * @h: first element
  * Return: number of elementts
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
