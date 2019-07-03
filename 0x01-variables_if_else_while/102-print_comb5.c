#include <stdio.h>

/**
 * main - entry point
 *
 * Description: loop variables (a-b-c) with ASCII
 *
 * Return: 0
*/
int main(void)
{
	int per = 0;
	int hex1;

	while (per <= 98)
	{
		hex1 = per + 1;
		while (hex1 <= 99)
		{
			putchar(per / 10 % 10 + '0');
			putchar(per % 10 + '0');
			putchar(' ');
			putchar(hex1 / 10 % 10 + '0');
			putchar(hex1 % 10 + '0');
			if (per == 98 && hex1 == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			hex1++;
		}
		per++; /*per +1*/
	}
	return (0);
}
