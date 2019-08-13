#include "holberton.h"
/**
 * append_text_to_file - entry point
 * Description: function that appends text at the end of a file
 * @filename: filename
 * @text_content: info to save in the file
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int efile;

	if (filename == NULL)
	{
		return (-1);
	}

	efile = open(filename, O_WRONLY | O_APPEND);

	if (efile == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write(efile, text_content, strlen(text_content));
	}

	return (1);
}
