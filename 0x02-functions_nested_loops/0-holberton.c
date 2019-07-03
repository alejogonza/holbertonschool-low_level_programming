#include "holberton.h"

/**
* main - entry point
* Descripion: prints holberton with _putchar
* Return: 0
*/
int main(void)
{
	char betty[9] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		_putchar(betty[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
