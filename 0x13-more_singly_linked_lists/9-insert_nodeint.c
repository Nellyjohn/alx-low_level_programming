#include "lists.h"

/**
  * insert_nodeint_at_index - insert node at a given index
  * @head: first node
  * @idx: index
  * @n: new node data
  * Return: address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(struct listint_s));
	listint_t *temp = *head;
	unsigned int count;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}

	count = 0;
	while (count < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		count++;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
