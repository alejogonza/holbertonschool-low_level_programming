#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * Description: adds positive numbers.
 * @argc: number of line args.
 * @argv: array of the line args.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num;
	int calc;
	int put;

	put = 0;

	for (num = 1; num < argc; num++)
	{
		for (calc = 0; argv[num][calc] != '\0'; calc++)
		{
			if (!isdigit(argv[num][calc]))
			{
				printf("Error\n");
				return (1);
			}
		}
		put += atoi(argv[num]);
	}
	printf("%d\n", put);
	return (0);
}
