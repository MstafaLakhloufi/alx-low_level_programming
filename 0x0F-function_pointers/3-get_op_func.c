#include "3-calc.h"

/**
* get_op_func - Selects the correct function to perform
*       the operation asked by the user.
* @s:  The operator passed as argument.
*
* Return: pointer to the function
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
	int x = 0;

	while (x < 5)
	{
		if (strcmp(s, ops[x].op) == 0)
			return (ops[x].f);

		x++;
	}

	return (0);
}
