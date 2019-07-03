#include <stdio.h>

/**
* main - prints the alphabet
* Description: print abc
* Return: 0
**/
int main(void)
{
	int abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
