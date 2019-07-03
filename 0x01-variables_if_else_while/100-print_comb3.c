#include <stdio.h>
/**
* main - entry point
* Description: print all combinations of 0 and 9 numbers no repeat combinations
* Return: 0
*/
int main(void)
{
	int hex1 = 48;
	int hex2 = 49;

	while (hex1 <= 56)
	{
		if (hex2 == 58)
		{
			hex2 = hex1 + 1;
			hex1++;
		}

		if (hex1 < hex2)
		{
			putchar(hex1);
			putchar(hex2);
			hex2++;
			if (hex1 < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
		else
		{
			hex2++;
		}
	}
	putchar('\n');
	return (0);
}
