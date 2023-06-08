#include <stdio.h>
/**
 * checker - check the input
 *
 * @n: num is squared and compare
 *
 * @base: base num to check
 *
 * Return: natural square
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - return the natural
 *
 * @n: num to check
 *
 * Return:natural
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
