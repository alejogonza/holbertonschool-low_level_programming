#include <unistd.h>
/**
 * main - entry point
 *
 * Description: write is a system call that is used to write data out of a buffer
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	
	return (1);
}
