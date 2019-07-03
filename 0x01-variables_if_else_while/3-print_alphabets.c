#include <stdio.h>

/**
* main - entry point
* Description: prints the alphabet in lowercase and uppercase
* Return: 0
*/
int main(void)
{
	int min = 'a';
	int mys = 'A';

	while (min <= 'z')
	{
		putchar(min);
		min++;
	}
	while (mys <= 'Z')
	{
		putchar(mys);
		mys++;
	}

	putchar('\n');
	return (0);
}
