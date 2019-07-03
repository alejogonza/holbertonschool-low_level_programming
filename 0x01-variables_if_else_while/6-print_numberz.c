#include <stdio.h>

/**
* main - entry point
* Description: prints base10 the 0 and the 9
* Return: 0
*/
int main(void)
{
	int cero = 48;

	while (cero <= 57)
	{
		putchar(cero);
		cero++;
	}
	putchar('\n');
	return (0);
}
