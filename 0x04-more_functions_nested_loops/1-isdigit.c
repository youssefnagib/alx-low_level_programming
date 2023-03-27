#include "main.h"
/**
 * _isdigit - if digit return 1 else return 0
 *
 * @c: input digit
 *
 * Return: 1 if digit , 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}
