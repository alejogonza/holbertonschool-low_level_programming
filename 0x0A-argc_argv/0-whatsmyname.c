#include <stdio.h>
/**
 * main - entry point
 * Description: prints its name, followed by a new line.
 * @argc: function name
 * @argv: array with arg
 * Return: function name
*/

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
