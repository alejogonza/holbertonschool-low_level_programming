#include <stdio.h>

/**
* main - entry point
* Description: print the alphabet upside down
* Return: 0
*/
int main(void)
{
	int cba = 'z';

	while (cba >= 'a')
	{
		putchar(cba);
		cba--;
	}
	putchar('\n');
	return (0);
}
