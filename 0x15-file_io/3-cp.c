#include "holberton.h"
#define ERRO97  "Usage: cp file_from file_to\n"
#define ERRO98  "Error: Can't read from file "
#define ERRO99  "Error: Can't write to "
#define ERRO100 "Error: Can't close fd "
#define NBYTES 1204
/**
 * main - entry point
 * Description: copies the content of a file to another file
 * @argc: num of args
 * @argv: args passed to cp
 * Return: 0
 */
int main(int argc, char **argv)
{
	int filep, filered, argcou = NBYTES, esqcoword = 0, perm = 0;
	char buffer[NBYTES] = { 0 };

	if (argc != 3)
	{
		write(STDERR_FILENO, ERRO97, 28), exit(97);
	}
	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	filep = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
	if (filep == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", ERRO99, argv[2]);
		exit(99);
	}
	filered = open(argv[1], O_RDONLY);
	if (filered == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", ERRO98, argv[1]);
		exit(98);
	}
	while (argcou == NBYTES)
	{
		argcou = read(filered, buffer, NBYTES);
		if (argcou == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", ERRO98, argv[1]);
			exit(98);
		}
		esqcoword = write(filep, buffer, argcou);
		if (esqcoword == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", ERRO99, argv[2]);
			exit(99);
		}
	}
	if (close(filep) != 0)
		dprintf(STDERR_FILENO, "%s%d\n", ERRO100, filep), exit(100);
	if (close(filered) != 0)
		dprintf(STDERR_FILENO, "%s%d\n", ERRO100, filered), exit(100);
	return (0);
}
