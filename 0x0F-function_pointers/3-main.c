#include "function_pointers.h"
#include <stdio.h>

int main(void)
{
	int (*calc_ptr_arr[])(int, int);
	char operator;
	int num1, num2, result;

	printf("Enter Choice: 0 for add, 1 for subtract, 2 for multiply,
			3 for division and 4 for remainder\n");
	scanf("%d", &operator);

	if (operator > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!operator)
	{
		printf("Error\n");
		exit(98);
	}

	(calc_ptr_arr[operator])(num1, num2);

	return (0);
}

