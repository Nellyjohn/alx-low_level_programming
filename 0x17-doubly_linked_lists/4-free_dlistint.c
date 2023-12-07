#include "lists.h"

/**
  * free_dlistint - frees  list
  * @head: firslt element of the list
  * Return: noid
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
