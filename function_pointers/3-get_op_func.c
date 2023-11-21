#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - pointer that points to a fonction
 * @s: operator
 * Return: correct fonction
*/

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
	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
		i++;
	return (ops[i].f);
}
