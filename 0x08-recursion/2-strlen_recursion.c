#include "main.h"
/***/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
