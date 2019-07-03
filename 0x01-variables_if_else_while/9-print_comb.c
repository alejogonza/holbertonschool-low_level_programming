#include <stdio.h>

/**
* main - entry point
* Description: print in base10 the 0 and the 9 with space and command
* Return: 0
*/
int main(void)
{
	int hex = 48;

	while (hex <= 57)
	{
		putchar(hex);
		if (hex != 57)
		{
			putchar(44);
			putchar(32);
		}
		hex++;
	}
	putchar('\n');
	return (0);
}
