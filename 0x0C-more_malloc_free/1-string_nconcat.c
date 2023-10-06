#include "main.h"

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: string 2
  * @n: number of bytes for s2
  * Return: pointer or NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index;
	unsigned int index3;
	unsigned int length = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
		length++;
	for (index = 0; s2[index] != '\0' && index < n; index++)
		length++;
	s3 = malloc(sizeof(char) * (length + 1));
	if (s3 == NULL)
		return (NULL);

	index = 0;
	index3 = 0;
	while (s1[index] != '\0')
	{
		s3[index3] = s1[index];
		index++;
		index3++;
	}
	index = 0;
	while (s2[index] != '\0' && index < n)
	{
		s3[index3] = s2[index];
		index++;
		index3++;
	}
	s3[index3] = '\0';

	return (s3);
}
