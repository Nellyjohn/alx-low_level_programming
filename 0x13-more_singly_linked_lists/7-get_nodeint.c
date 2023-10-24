#include "lists.h"

/**
  * get_nodeint_at_index - retruns the node a given index
  * @head: first node
  * @index: position of the node
  * Return: return the node or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
