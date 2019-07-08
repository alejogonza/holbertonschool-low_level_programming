#include "holberton.h"
/**
 * print_chessboard - entry point
 * Description: prints a chessboard
 * @a: chess array
 */
void print_chessboard(char (*a)[8])
{
	int p1;
	int p2;

	for (p1 = 0; p1 < 8; p1++)
	{
		for (p2 = 0; p2 < 8; p2++)
			_putchar(a[p1][p2]);
		_putchar('\n');
	}
}
