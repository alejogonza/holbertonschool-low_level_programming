#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - entry point
 * Descripiton: function that reads a file and prints output.
 * @filename: file
 * @letters: num to chars to show
 * Return: num of chars
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileenty;
	int printchar;
	char *chars;

	chars = malloc(letters + 1);

	if (chars == NULL)
	{
		free(chars);
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fileenty = open(filename, O_RDONLY);

	if (fileenty == -1)
	{
		return (0);
	}

	printchar = read(fileenty, chars, letters);

	write(STDOUT_FILENO, chars, printchar);

	close(fileenty);

	return (printchar);
}
