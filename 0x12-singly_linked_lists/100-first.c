#include <stdio.h>
/**
 * bforemain - prints before main.
 * Return: 0
 */

void __attribute__((constructor))bforemain(void)
{

	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");

}
