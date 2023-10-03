#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: result
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int argcount = 0;
	int argcharacter = 0;

	argcount = 1
	while (argcount < argc)
	{
		argcharacter = 0;
		while (argv[argcount][argcharacter] != '\0')
		{
			if (argv[argcount][argcharacter] < 48 ||
					argv[argcount][argcharacter] > 57)
			{
				printf("Error\n");
				return (1);
			}
			argcharacter++;
		}
		sum = sum + atoi(argv[argcount]);
		argcount++;
	}
	printf("%d\n", sum);

	return (0);
}
