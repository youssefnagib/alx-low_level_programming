#include "main.h"
/***/
int _strcmp(char *s1, char *s2)
{
	int e = 0;

	if (s1 != s2)
	{
		e = ((int) *s1 - 48) - ((int) *s2 - 48);
		break;
	}
	s1++;
	s2++;
	return (e);
}
