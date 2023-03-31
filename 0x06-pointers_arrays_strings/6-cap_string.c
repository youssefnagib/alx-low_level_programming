#include "main.h"
/**
 * cap_string - function caplitze
 *
 * @s: string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i;

i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
