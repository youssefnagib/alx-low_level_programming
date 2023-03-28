#include "main.h"
/**
 * print_rev - function that print in rev way
 *
 * @s: is the parameter
 *
 * Return: (rev)
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c])
	{
		c++;
	}
	while (c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
