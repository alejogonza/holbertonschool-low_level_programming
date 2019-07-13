#include <stdio.h>
/**
 * main - entry point
 * Description: prints all arguments it receives
 * @argc: num to args
 * @argv: pointer of array with args
 * Return: the args
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
