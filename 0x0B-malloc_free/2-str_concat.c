#include "main.h"

/**
  * str_concat - concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * Return: pointer to newly allocated space or NULL
  */
char *str_concat(char *s1, char *s2)
{
	int s1_index;
	int s2_index;
	int s3_index = 0;
	char *s3;
	int length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_index = 0;
	s2_index = 0;
	while (s1[s1_index] != '\0' || s2[s2_index] != '\0')
	{
		length++;
		s1_index++;
		s2_index++;
	}

	s3 = (malloc(sizeof(char) * (length)));
	if (s3 == NULL)
		return (NULL);
	s1_index = 0;
	while (s1[s1_index] != '\0')
	{
		s3[s3_index] = s1[s1_index];
		s1_index++;
		s3_index++;
	}
	s2_index = 0;
	while (s2[s2_index] != '\0')
	{
		s3[s3_index] = s2[s2_index];
		s2_index++;
		s3_index++;
	}
	s3[s3_index] = '\0';

	return (s3);
}
