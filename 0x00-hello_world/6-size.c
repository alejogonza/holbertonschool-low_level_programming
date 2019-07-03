#include <stdio.h>

/**
* main - String entry and prints with printf
*
* Description: print in screen a string with printf
*
* Return: 0
*/
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("\n");
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("\n");
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("\n");
	printf("Size of a long long int: %d byte(s)", sizeof(long long int));
	printf("\n");
	printf("Size of a float: %d byte(s)", sizeof(float));
	printf("\n");
	return (0);
}
