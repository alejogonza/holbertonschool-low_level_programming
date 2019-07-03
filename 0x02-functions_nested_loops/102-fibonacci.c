#include<stdio.h>

/**
 * main - entry point
 * Description: program to print fibonacci sequence "50"
 * Return: 0
 */
int main(void)
{
	unsigned int s1;
	unsigned long int s2 = 1;
	unsigned long int s3 = 1;
	unsigned long int f;

	printf("%lu, ", s2);

	for (s1 = 0; s1 <= 48; s1++)
	{
		f = s2 + s3;
		s2 = s3;
		s3 = f;
		if (s1 < 48)
			printf("%lu, ", s3);
		else
			printf("%lu\n", s3);
	}
	return (0);
}
