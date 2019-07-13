#include <stdio.h>
#include <ctype.h>
#include "stdlib.h"
/**
 * main - entry point
 * Descritpion: adds positive numbers
 * @argc: nums of args
 * @argv: the array with args
 * Return: 0 or 1 = not numbers
 */

int main(int argc, char *argv[])
{
	int counter;
	int put = 0;
	int sup = 0;

	for (counter = 1; counter < argc; counter++)
	{
		for (sup = 0; argv[counter][sup]; sup++)
		{
			if (isdigit(argv[counter][sup]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (isdigit(*argv[counter]) != 0)
		{
			put = put + atoi(argv[counter]);
		}
	}
	printf("%d\n", put);
	return (0);
}
