#include <stdio.h>
/**
 * main - entry point
 * Description: prints the number of arguments passed into it
 * @argc: number args in argv
 * @argv: array with args to count
 * Return: nums - args
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
	}
	printf("%d\n", counter - 1);
	(void)argv;
	return (0);
}
