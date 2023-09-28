#include "main.h"

int _sqrt_helper(int n, int g);

/**
 * _sqrt_helper -  finds the natural square root of a number
 * @n: number to find the square root of
 * @g: square root to find
 * Return: returns the square root if n has a natural square root,
 * -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int g)
{
	if ((g * g) == n)
		return (g);

	if (g == (n / 2))
		return (-1);

	return (_sqrt_helper(n, g + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of a number recursively
 * @n: number to find the sqare root of
 * Return: returns the square root if n has a natural square root,
 * -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int g = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt_helper(n, g));
}
