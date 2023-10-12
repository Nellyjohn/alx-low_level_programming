#include "function_pointers.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int (*calc)(int, int);
	char operator = argv[2][0];
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator != '+' || operator != '-' || operator != '*' || operator != '/' || operator != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (*calc)(num1, num2);
	printf("%d\n", result);

	return (0);
}

