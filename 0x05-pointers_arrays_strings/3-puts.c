#include "main.h"
/**
 * _puts - function that print string
 *
 * @str: is parameter
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
