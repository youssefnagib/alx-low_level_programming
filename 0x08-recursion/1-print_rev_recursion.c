#include "main.h"
/***/
void _print_rev_recursion(char *s)
{
	int i;

	*s++;
	for (i = 0; i != '\0'; i++)
	{
		i = s[0];
		*s--;
		_putchars[0];
	}
	_putchar('\n')
}
