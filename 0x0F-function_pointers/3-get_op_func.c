#include "function_pointers.h"

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < (sizeof(ops) / sizeof(op_t)))
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].func);
		i++;
	}

	return (NULL);
}
