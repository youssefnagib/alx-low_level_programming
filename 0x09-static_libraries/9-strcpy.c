#include "main.h"
/**
 * _strcpy - function that copy string
 *
 * @dest: is parameter
 *
 * @src: is parameter
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
