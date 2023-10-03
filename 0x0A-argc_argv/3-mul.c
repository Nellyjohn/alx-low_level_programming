#include "main.h"

/**
  * main - multiplies two numbers
  * @argc: number of argumenets passed to the program
  * @argv: list of arguments
  * Return: sum of two arument numbers
  */
int main(int argc, char **argv)
{
	int a;
	int b;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
