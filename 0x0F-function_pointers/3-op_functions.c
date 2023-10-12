#include "function_pointers.h"

int op_mod(int a, int b)
{
	int result = a % b;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (result);
}

int op_add(int a, int b)
{
	int result = a + b;

	return (result);
}

int op_sub(int a, int b)
{
	int result = a - b;
	return (result);
}

int op_mul(int a, int b)
{
	int result = a * b;

	return (result);
}

int op_div(int a, int b)
{
	int result = a / b;

	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (result);
}
