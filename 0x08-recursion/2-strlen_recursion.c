#include "main.h"
/***/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[0] != '\0')
	{
		++i;
		s++;
	}
	return (i);
}
