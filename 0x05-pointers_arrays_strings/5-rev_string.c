#include "main.h"
/***/
void rev_string(char *s)
{
	int c, m, m1;
	char tmp;

	for (m = 0; s[m] != '\0'; ++m);
	m1 = m - 1;
	for (c=0; c < m/2; c++)
	{
		tmp = s[c];
		s[c] = s[m1];
		s[m1--] = tmp;
	}
}
