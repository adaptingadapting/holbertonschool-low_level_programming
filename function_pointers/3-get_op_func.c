#include "3-calc.h"

/**
 * get_op_func - gets a function
 * @string: op function
 * @a: int to do op on
 * @b: int to do op on
 * Return: result of op
 */

int (*get_op_func(char *string))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mu1},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
	int i;

	for (i = 0; ops[i].op; i++)
		if (!strcmp(ops[i].op, string))
		  return (ops[i].f);
	return (NULL);
}
