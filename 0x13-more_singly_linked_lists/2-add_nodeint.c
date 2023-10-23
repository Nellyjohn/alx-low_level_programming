#include "lists.h"

/**
  * add_nodeint - adds a node at the beginning of a list
  * @head: first node
  * @n: new node data
  * Return: pointer to the address of the new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(struct listint_s));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
