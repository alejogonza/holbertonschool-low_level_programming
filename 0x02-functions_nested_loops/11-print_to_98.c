#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98  - entry point
 * Description: print numbers 0 to 98
 * @num: integer
 * Return: 0
 */
void print_to_98(int num)
{
	int count;

	if (num < 98)
	{
		for (count = num; count <= 98; count++)
		{
			printf("%d", count);

			if (count != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	} else if (num > 98)
	{
		for (count = num; count >= 98; count--)
		{
			printf("%d", count);

			if (count != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	} else
	{
		printf("%d\n", num);
	}
}
