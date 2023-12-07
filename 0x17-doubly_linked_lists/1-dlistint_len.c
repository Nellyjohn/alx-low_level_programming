#include "lists.h"

/**
  * dlistint_len - calculates the number of
  * elements in a linked dlistint_t list.
  * @h: first element of the list
  * Return: the number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	if (h == NULL)
		printf("Error\n");

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
