#include "lists.h"

/**
  * __attribute__ - compiles without error
  * constructor - prints a string before main() is executed
  * first - prints before main
  * Return: nothing
  */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
