#include "lists.h"

/**
  * add_node - adds a node at the beginning of a list
  * @head: first element
  * @str: string
  * Return: address of the new node
  */
list_t *add_node(list_t **head, const char *str)
{
	char *dup_str;
	int len;
	struct list_s *new_node = malloc(sizeof(struct list_s));

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
