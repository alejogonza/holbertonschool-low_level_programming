#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Descripiton: prints the opcodes of its own main function
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *opt;
	int val;
	int bynum;

	opt = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bynum = atoi(argv[1]);

	if (bynum < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (val = 0; val < bynum; val++)
	{
		printf("%02x", opt[val] & 0xFF);

		if (val != bynum - 1)

			printf(" ");
	}

	printf("\n");
	return (0);
}
