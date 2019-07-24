#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - entry point
 * Description: function to select correct operation
 * @s: arg operator to the program
 * Return: funct pointer
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

    int optor = 0;

	while (optor < 5)
	{
		if (ops[optor].op[0] == s[0])
			return (ops[optor].f);
		optor++;
	}
	return (NULL);
}
