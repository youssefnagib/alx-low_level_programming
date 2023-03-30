#include "main.h"
/**
 * _strncat - function that print the num's that pointed to
 *
 * @dest: the pointer the description input
 *
 * @src: the pointer the source input
 *
 * @n: the pointer the num's in the word that need to print in the sec
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int o, i;

	while (dest[o])
		o++;
	for (i = 0; src[i] <= n - 1; i++)
		dest[o++] = src[i];
	return (dest);
}
