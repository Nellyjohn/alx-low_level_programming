#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @index: character to check
 * Return: 1 if character, 0 otherwise
 */

int _isalpha(int index)
{
	if ((index >= 'a' && index <= 'z') || (index >= 'A' && index <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isdigit - checks for a digit from 0 to 9
 * @index: digit
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int index)
{
	if (index >= 48 && index <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

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
 * _tolower - converts to lower character
 * @index: character
 * Return: converted character
 */

char _tolower(char index)
{
	if (index >= 'A' && index <= 'Z')
	{
		index = index + ('a' - 'A');
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
		if (_isalpha(sentence[index]) || _isdigit(sentence[index]))
		{
			if (capitalize_next)
			{
				sentence[index] = _toupper(sentence[index]);
				capitalize_next = 0;
			}
			else
			{
				sentence[index] = _tolower(sentence[index]);
			}
		}
		else if (_isalpha(sentence[index]))
		{
			if (capitalize_next)
			{
				sentence[index] = _toupper(sentence[index]);
				capitalize_next = 0;
			}
			else
			{
				sentence[index] = _tolower(sentence[index]);
			}
		}
		else
		{
			capitalize_next = 1;
		}
		index++;
	}

	return (sentence);
}
