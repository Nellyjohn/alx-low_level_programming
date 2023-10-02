#include "main.h"

int _atoi(char *s)
{
	int index = 0;
	int number = 0;
	int sign = 1;

	if (s[index] == '-')
	{
		sign = -1;
	}
	else if (s[index] == '+')
	{
		index++;
	}

	while (s[index] >= '0' && s[index] <= '9')
	{
		number = number * 10 + (s[index] - '0');
		index++;
	}

	return (sign * number);
}
