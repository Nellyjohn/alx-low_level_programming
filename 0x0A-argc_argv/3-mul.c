#include "main.h"

/**
  * main - multiplies two numbers
  * @argc: number of argumenets passed to the program
  * @argv: list of arguments
  * Return: sum of two arument numbers
  */
int main(int argc, char **argv)
{
	int result;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (result);
}
