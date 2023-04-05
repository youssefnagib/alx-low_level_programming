#include "main.h"
/**
 * _strlen_recursion - function that determine len
 *
 * @s: input string
 *
 * Return: lenth of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
