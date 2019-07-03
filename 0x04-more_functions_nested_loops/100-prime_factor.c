#include <stdio.h>
/**
 *main - entry point
 *Description: prints the prime factor of 612852475143 (max)
 *Return: 0
 */
int main(void)
{
	long int num;
	long int pf;

	pf = 612852475143;

	for (num = 2; num <= pf; num++)
	{
		if (pf % num == 0)
		{
			pf /= num;
			num -= 1;
		}
		if (pf == 1)
		{
			num += 1;
			printf("%ld\n", num);
		}
	}
	return (0);
}
