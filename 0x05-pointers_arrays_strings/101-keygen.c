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
	int k;
	int i;
	int sk;

	k = 0;
	i = 0;
	sk = 0;

	time_t t;

	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		k = rand() % 128;
		if ((i + k) > 2772)
			break;
		i += k;
		printf("%c", k);
		sk++;
	}
	printf("%c\n", (2772 - i));
	return (0);
}
