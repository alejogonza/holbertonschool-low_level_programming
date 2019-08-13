#include "holberton.h"
/**
 * main - entry point
 * Description: program that copies the content of a file to another file
 * @argc: number of elements
 * @argv: file to copy
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fperm, fperm2;
	ssize_t x, y;
	char z[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		exit(97);
	fperm = open(argv[1], O_RDONLY);
	fperm2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	y = read(fperm, z, 1024);
	if (y == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file%s\n", argv[1]),
			exit(98);
	while (y)
	{
	x = write(fperm2, z, y);
	if (x == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]),
			exit(99);
	y = read(fperm, z, 1024);
	if (y == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file%s\n", argv[1]),
			exit(98);
	}
	x = close(fperm);
	if (x == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", fperm),
			exit(100);
	x = close(fperm2);
	if (x == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", fperm2),
			exit(100);
	return (0);
}
