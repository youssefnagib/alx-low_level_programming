#include "main.h"
/**
 * factorial - git factor of num
 *
 * @n: input
 *
 * Return: (factor)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
