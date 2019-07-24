#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - entry point
 * Description: a + b.
 * @a: int1
 * @b: int2
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point
 * Description: a - b.
 * @a: int1
 * @b: int2
 * Return: the residue
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry point
 * Description: a * b
 * @a: int1
 * @b: int2
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry point
 * Description: a / b
 * @a: int1
 * @b: int2
 * Return: the dividend
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - entry point
 * Description: a % b
 * @a: int1
 * @b: int2
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
