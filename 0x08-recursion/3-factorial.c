#include "main.h"
/**
 * factorial - function that factorial
 *
 * @n: input num
 *
 * Return: 1 or n or -1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	return (n * factorial(n - 1));
}
