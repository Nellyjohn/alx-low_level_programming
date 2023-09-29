#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
/**
 * is_palindrome_helper - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @start_index: first element in the string.
 * @end_index: second to the last element of the string.
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome_helper(char *s, int start_index, int end_index)
{
	if (start_index >= end_index)
		return (1);

	if (s[start_index] != s[end_index])
		return (0);

	return (is_palindrome_helper(s, start_index + 1, end_index - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 if string is palindrome, else 0
 */
int is_palindrome(char *s)
{
	if (!s)
		return (1);

	return (is_palindrome_helper(s, 0, _strlen(s) - 1));
}
