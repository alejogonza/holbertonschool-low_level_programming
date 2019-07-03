#include <stdio.h>

/**
 * main - entry point
 * Description: find sum of even fibonacci
 * Return: 0
 *
 */
int main(void)
{
	long int fnco = 1;
	long int fnct = 2;
	long int rec;
	long int sum = 2;
	int in;

	for (in = 3; in <= 32; in++)
	{
		rec = fnco + fnct;

		if ((rec % 2) == 0)
		{
			sum = sum + rec;
		}

		fnco = fnct;
		fnct = rec;
	}

	printf("%ld\n", sum);

	return (0);
}
