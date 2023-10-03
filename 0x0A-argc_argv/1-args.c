#include "main.h"

/**
  * main - prints the numeber of arguments passed into a program
  * @argc: number of arguments
  * @argv: list of arguments passed
  * Return: number of arguments
  */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
