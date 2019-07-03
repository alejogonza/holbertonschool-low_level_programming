#include <stdio.h>
/**
 * main - entry point
 * Description: prints the sum of themultiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int ai;
	int sum;

	for (ai = 0; ai < 1024; ai++)
	{
		if ((ai % 3 == 0 || ai % 5 == 0))
		{
			sum = sum + ai;
		}
	}
	printf("%d\n", sum);

	return (0);
}
