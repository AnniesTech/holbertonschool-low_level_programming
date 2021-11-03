#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - gets the parameter entered in
 * the console by the user and compares it with the operands functions
 * @s: Value entered in the console
 * Return: NULL, if the signed entered doesn't match
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
