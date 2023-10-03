#include "main.h"

/**
  * main - prints all arguments it receives
  * @argc: argument count
  * @argv: list of srguments
  * Return: all arguments
  */
int main(int argc, char **argv)
{
	while (argc-- >= 1)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
