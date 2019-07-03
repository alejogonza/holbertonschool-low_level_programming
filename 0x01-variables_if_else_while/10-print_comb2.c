#include <stdio.h>

/**
* main - entry point
* Descripion: prints base10 numbers the 00 and 99 with space and commas
* Return: 0
*/
int main(void)
{
	int hexone = 48;
	int hextwo = 48;

	while (hexone <= 57 && hextwo <= 57)
	{
		putchar(hexone);
		putchar(hextwo);
		if (hexone != 57 || hextwo != 57)
		{
			putchar(44);
			putchar(32);
		}
		hextwo++;
		if (hextwo == 58 && hexone != 57)
		{
			hextwo = 48;
			hexone++;
		}
	}
	putchar('\n');
	return (0);
}
