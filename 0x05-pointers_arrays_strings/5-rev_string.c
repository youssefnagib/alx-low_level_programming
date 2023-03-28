#include "main.h"
/***/
void rev_string(char *s)
{
	int c, m;
	for (m = 0; s[m] != '\0'; ++m);
	for (c=0; c < m/2; c++)
	{
		tmp = s[c];
		s[c] = s[m];
		s[m--] = tmp;
	}
}
