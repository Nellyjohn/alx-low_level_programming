#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @num: number
  * Return: last digit of the number
  */

int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit < 0)
		lastdigit = -lastdigit;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
