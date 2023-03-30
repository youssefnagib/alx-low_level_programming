#include "main.h"
/***/
char *_strncat(char *dest, char *src, int n)
{
	int o, i;

	while (dest[o])
		o++;
	for (i = 0; src[i] <= n; i++)
		dest[o++] = src[i];
	return (dest);
}
