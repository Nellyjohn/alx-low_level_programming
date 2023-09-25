#include "main.h"

/**
  * set_string - sets the value of a pointer to a char
  * @s: pointer to a pointer to the characeter
  * @to: pointer to the char
  * Return: void
  */

void set_string(char **s, char *to)
{
	*s = to;
}
