#include <stdio.h>
/**
* main - entry point
* Description: prints FizzBuzz-Fizz-Buzz each numbers of 3 and 5
* Return: 0
*/
int main(void)
{
	int mul;

	for (mul = 1; mul <= 100; mul++)
	{
		if ((mul % 3 != 0) && (mul % 5 != 0))
		{
			printf("%d", mul);
		}
		if ((mul % 3 == 0) && (mul % 5 != 0))
		{
			printf("Fizz");
		}
		if ((mul % 5 == 0) && (mul % 3 != 0))
		{
			printf("Buzz");
		}
		if ((mul % 3 == 0) && (mul % 5 == 0))
		{
			printf("FizzBuzz");
		}
		if (mul != 100)
		{
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
