#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int bol1, bol2, chr;
	long int fun1, fun2, nit1, nit2, nu1, nu2;

	nit1 = 1;
	nit2 = 2;
	bol1 =  bol2 = 1;
	printf("%ld, %ld", nit1, nit2);
	for (chr = 0; chr < 96; chr++)
	{
		if (bol1)
		{
			fun1 = nit1 + nit2;
			printf(", %ld", fun1);
			nit1 = nit2;
			nit2 = fun1;
		}
		else
		{
			if (bol2)
			{
				nu1 = nit1 % 1000000000;
				nu2 = nit2 % 1000000000;
				nit1 = nit1 / 1000000000;
				nit2 = nit2 / 1000000000;
				bol2 = 0;
			}
			fun2 = (nu1 + nu2);
			fun1 = nit1 + nit2 + (fun2 / 1000000000);
			printf(", %ld", fun1);
			printf("%ld", fun2 % 1000000000);
			nit1 = nit2;
			nu1 = nu2;
			nit2 = fun1;
			nu2 = (fun2 % 1000000000);
		}
		if (((nit1 + nit2) < 0) && bol1 == 1)
			bol1 = 0;
	}
	printf("\n");
	return (0);
}
