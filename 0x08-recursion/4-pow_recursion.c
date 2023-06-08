#include "main.h"
/**
 * _pow_recursion - power num and git retuen
 *
 * @x: input
 *
 * @y: input
 *
 * Return: (num)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
