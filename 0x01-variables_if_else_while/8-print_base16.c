#include <stdio.h>

/**
* main - entry point
* Description: print the numbers and letters in base16
* Return: 0
*/
int main(void)
{
	int num = 48;
	int hex = 'a';

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
