#include <stdio.h>

/**
* main - entry point
* Description: prints the alphabet but the e and q no
* Return: 0
*/
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		if (abc != 'e' && abc != 'q')
			putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
