#include "main.h"

/**
  * _strdup - allocates a new space in memory
  * @str: string
  * Return:  pointer to the new string or NULL
  */
char *_strdup(char *str)
{
	char *new_str;
	int index;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (str[index] != '\0')
	{
		new_str[index] = str[index];
		index++;
	}
	new_str[index] = '\0';

	return (new_str);
}
