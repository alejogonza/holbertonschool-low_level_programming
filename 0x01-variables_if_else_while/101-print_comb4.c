#include <stdio.h>
/**
* main - entry point
* Description: print 3 combinations(0- 9)(no repeat numbers, prev combinations)
* Return: 0
*/
int main(void)
{
	int hex1 = 48;
	int hex2 = 49;
	int hex3 = 50;

	while (hex1 <= 55)
	{
		if (hex3 == 58)
		{
			hex3 = hex2 + 1;
			hex2++;
		}
		if (hex2 == 57)
		{
			hex2 = hex1 + 1;
			hex1++;
		}

		if (hex2 < hex3 && hex1 < hex2)
		{
			putchar(hex1);
			putchar(hex2);
			putchar(hex3);
			hex3++;
			if (hex1 < 55)
			{
				putchar(44);
				putchar(32);
			}
		}
		else
		{
			hex3++;
		}
	}
	putchar('\n');
	return (0);
}
