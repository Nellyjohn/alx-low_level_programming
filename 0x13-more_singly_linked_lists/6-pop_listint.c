#include "lists.h"

/**
  * pop_listint - deletes head node
  * @head: first node
  * Return: node's data
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr = *head;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	n = ptr->n;
	free(ptr);

	return (n);
}
