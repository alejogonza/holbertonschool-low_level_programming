#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * nums - entry point
 * Description: check num is an int
 * @num: val to check if is an int
 * Return: 1 = int 0 if not
 */
int nums(char num[])
{
	int digit;

	digit = 0;

	if (num[0] == '-')
		digit = 1;
	for (; num[digit] != 0; digit++)
	{
		if (!isdigit(num[digit]))
			return (0);
	}
	return (1);
}
/**
 * main - entry point
 * @argc: num of args pass to main
 * @argv: array of pointers pass to main
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int digit2;
	int put;
	long res;

	digit2 = 1;
	res = 0;

	if (argc < 1)
	{
		printf("0\n");
	} else
	{
		while (digit2 < argc)
		{
			if (nums(argv[digit2]))
			{
				put = atoi(argv[digit2]);
				res += put;
			}
			else
			{
				printf("Error\n");
				break;
			}
			digit2++;
		}
		if (digit2 == argc)
			printf("%ld\n", res);
	}
	return (0);
}
