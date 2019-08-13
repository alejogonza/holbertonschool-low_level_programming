#include <stdio.h>
#include <ctype.h>
#include "stdlib.h"
/**
 * main - entry point
 * Description: prints the minimum num of coins to change for an amount
 * @argc: the nums of args
 * @argv: the array with the args
 * Return: 0 or 1 if the args are not nums
 */

int main(int argc, char *argv[])
{
	int cts;
	int nmoney = 0;

	nmoney = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cts = atoi(argv[1]);

	while (cts > 0)
	{
		if (cts >= 25)
			cts -= 25;

		else if (cts >= 10)
			cts -= 10;

		else if (cts >= 5)
			cts -= 5;

		else if (cts >= 2)
			cts -= 2;

		else if (cts >= 1)
			cts -= 1;

		nmoney += 1;
	}

	printf("%d\n", nmoney);
	return (0);
}
