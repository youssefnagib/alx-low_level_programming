#include "main.h"
/**
 * _strlen_recursion - func to know Lighth
 *
 * @s: in put str
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (s[0] != '\0')
		l += _strlen_recursion(s + 1) + 1;

	return (l);
}
