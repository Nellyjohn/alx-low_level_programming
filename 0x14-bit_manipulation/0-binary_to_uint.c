#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to a string of 0s and 1s
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int index, len = 0;
	unsigned int result = 0;
	unsigned int pow_of_2 = 1;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
		len++;

	index = len - 1;
	while (index >= 0)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result += (b[index] - '0') * pow_of_2;
		pow_of_2 *= 2;
		index--;
	}
	return (result);
}
