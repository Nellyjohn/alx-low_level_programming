#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  * @head: first element of the list
  * @n: new node data
  * Return: address of the new node of NULL
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head != NULL)
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
		new_node->next = NULL;
	}
	if (*head == NULL)
		*head = new_node;

	return (new_node);
}
