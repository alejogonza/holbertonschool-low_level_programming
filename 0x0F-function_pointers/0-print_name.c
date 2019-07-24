#include "function_pointers.h"

/**
 * print_name - entry point
 * Description: function that prints a name.
 * @name: print name.
 * @f: Function pointer.
 * Return: Void.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
