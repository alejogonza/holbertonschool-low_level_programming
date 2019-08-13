#include "holberton.h"
/**
 * create_file - entry point
 * Description: create a file with permission 600
 * @filename: name of file
 * @text_content: data of the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int filep;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	filep  = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (filep == -1)
	{
		return (-1);
	}

	write(filep, text_content, strlen(text_content));

	return (1);
}
