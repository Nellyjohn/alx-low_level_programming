#include "lists.h"

/**
  * print_dlistint - prints all elements in a list
  * @h: first element of the list
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		printf("Error\n");

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
