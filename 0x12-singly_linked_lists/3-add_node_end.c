#include "lists.h"

/**
 * add_node_end - adds node to the end of a list
 * @head: head of the list
 * @str: string to be added
 * Return: null or address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *new_node = malloc(sizeof(struct list_s));
	char *dup_str;
	struct list_s *temp;
	size_t len = 0;

	if (new_node == NULL)
		return (NULL);

	if (str)
		dup_str = strdup(str);

	if (!dup_str)
	{
		free(new_node);
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
		len++;

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
