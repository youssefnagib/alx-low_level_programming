#include "main.h"
/**
 * _strcat - fucntion that print with old
 *
 * @dest: pointer to descrbtion input
 *
 * @src: pointer to source input
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int o, n;

	o = 0;
	while (dest[o])
		o++;
	for (n = 0; src[n]; n++)
		dest[o++] = src[n];
	return (dest);
}
