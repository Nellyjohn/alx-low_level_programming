#include "lists.h"

/**
  * add_nodeint_end - inserts a node at the end of a list
  * @head: first node
  * @n: new node data
  * Return: pointer to the address of the new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(struct listint_s));
	listint_t *lastNode;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}

	return (newNode);
}
