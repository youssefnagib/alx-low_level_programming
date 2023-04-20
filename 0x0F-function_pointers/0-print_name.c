#include "function_pointers.h"

/**
 * print_name - function prints name
 *
 * @name: string name
 *
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name && f)
		f(name);
}
