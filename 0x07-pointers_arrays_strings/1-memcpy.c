#include "holberton.h"
/**
* _memcpy - entry point
* Description: num of bytes from a src - dest
* @src: cp from
* @n: c-bytes
* @dest: cp to
* Return: Pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int memy;
	unsigned int var1;

	for (memy = 1; memy <= n; memy++)
		var1 = memy - 1;
		*(dest + var1) = *(src + var1);

	return (dest);
}
