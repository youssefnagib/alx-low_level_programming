#include "main.h"
/**
 * _strlen - out put L
 *
 * @s: input file
 *
 * Return: c
 */
int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s != '/0'; s++)
	{
		c++;
	}
	return (c);
}
