#include "main.h"
/**
 * */
void _print_rev_recursion(char *s)
{
	int i = 0;
	int t = 0;

	i++;
	if (s[0] != '\0')
	{
		i = t;
		s++;
		i--;
	}
	if (s[0] != '\0')
	{
		s[0] = t;
		 s--;
		 t++;
	}
}
