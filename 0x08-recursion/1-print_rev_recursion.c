#include "main.h"
/**
 * _print_rev_recursion - functin that print string in reverse
 *
 * @s: string input
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
