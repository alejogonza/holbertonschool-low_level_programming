#include "holberton.h"
/**
 * print_buffer - entry point
 * Description: function that adds two numbers.
 * @b: String to print
 * @size: Size of String
 */

void print_buffer(char *b, int size)
{
	int axi;
	int axi2;
	int axi3;

	if (size <= 0)
		printf("\n");
	else
	{
		for (axi = 0; axi < size; axi += 10)
		{
			printf("%.8x:", axi);

			for (axi2 = axi; axi2 < axi + 10; axi2++)
			{
				if (axi2 % 2 == 0)
					printf(" ");

				if (axi2 < size)
					printf("%.2x", b[axi2]);
				else
					printf("  ");
			}
			printf(" ");
			for (axi3 = axi; axi3 < axi + 10; axi3++)
			{
				if (axi3 >= size)
				{
					break;
				}

				b[axi3] = (b[axi3] >= 0 && b[axi3] <= 31) ? ('.') : (b[axi3]);

				printf("%c", b[axi3]);
			}
			printf("\n");
		}
	}
}
