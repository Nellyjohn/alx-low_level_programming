#include "lists.h"

/**
  * get_dnodeint_at_index - gets the node at a position
  * @head: first element
  * @index: position to retrieve the node
  * Return: the node or NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
