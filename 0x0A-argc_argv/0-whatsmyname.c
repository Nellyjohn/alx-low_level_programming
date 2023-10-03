#include "main.h"

/**
  * main - prints the name of a program
  * @argc: number of argumenets passed to the program
  * @argv: list of arguments passed
  * Return: returns 0 on success
  */
int main(int argc, char **argv)
{
	while (argc == 1)
	{
		printf("%s\n", argv[0]);
		argc--;
	}
	exit(EXIT_SUCCESS);
}
