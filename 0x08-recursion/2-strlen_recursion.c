#include "main.h"
/***/
int _strlen_recursion(char *s)
{
	int l = 0;

	if (s[l] != '\0')
		l++;
	return (l);
}
