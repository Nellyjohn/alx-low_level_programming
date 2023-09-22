#include "main.h"

/**
 * _toupper - converts character to uppercase
 * @index: character
 * Return: coverted character
 */

char _toupper(char index)
{
	if (index >= 'a' && index <= 'z')
	{
		index = index - ('a' - 'A');
	}

	return (index);
}

/**
 * cap_string - capitalizes string
 * @sentence: sentence to check
 * Return: string
 */

char *cap_string(char *sentence)
{
	int index;
	int capitalize_next = 1;

	index = 0;
	while (sentence[index] != '\0')
	{
		if (sentence[index] == ' ' || sentence[index] == '\t' || sentence
				[index] == '\n' || sentence[index] == ',' || sentence[index] == ';' ||
				sentence[index] == '.' || sentence[index] == '!' || sentence[index] == '?'
				|| sentence[index] == '"' || sentence[index] == '(' || sentence
				[index] == ')' || sentence[index] == '{' || sentence[index] == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next == 1)
		{
			sentence[index] = _toupper(sentence[index]);
			capitalize_next = 0;
		}
		index++;
	}

	return (sentence);
}
