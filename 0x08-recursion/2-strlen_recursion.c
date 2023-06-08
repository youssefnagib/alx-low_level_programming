#include "main.h"
/***/
int _strlen_recursion(char *s)
{
	int l = 0;

	if (s[0] != '\0')
		l += _strlen_recursion(s + 1) + 1;

	return (l);
}
