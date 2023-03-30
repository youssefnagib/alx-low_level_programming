#include "main.h"
/**
 * _strcmp - function that compare between s1 and s2
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: e
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	if (*s1 != *s2)
	{
		equal = ((int)*s1 - 48) - ((int)*s2 - 48);
		break;
	}
	s1++;
	s2++;
	return (equal);
}
