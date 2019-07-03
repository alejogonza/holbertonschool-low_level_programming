#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: my keygen.
 * Return: 0.
 */

int main(void)
{
	int kn = 0;
	int in = 0;
	int sk = 0;
	time_t te;

	srand((unsigned int) time(&te));
	while (in < 2772)
	{
		kn = rand() % 128;
		if ((in + kn) > 2772)
			break;
		in += kn;
		sk++;
		printf("%c", kn);
	}
	printf("%c\n", (2772 - in));
	return (0);
}
