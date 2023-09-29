#include "main.h"

int is_prime_helper(int n, int g);

/**
 * is_prime_helper - checks prime
 * @n: number to check
 * @g: the divisor
 * Return: if number is divisible 0, else 1
 */
int is_prime_helper(int n, int g)
{
	if (n <= 1)
		return (0);

	if (g * g > n)
		return (1);
	if (n % g == 0)
		return (0);

	return (is_prime_helper(n, g + 1));
}

/**
 * is_prime_number - checks if a given number is prime number or not
 * @n: number to be checked
 * Return: if number is not prime 0, else 1
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
