#include <stdio.h>
/**
 * checker - checks the input number
 *
 * @n: number is squared and compared
 *
 * @base: base number to check
 *
 * Return: natural square root of number base
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
 * _sqrt_recursion - return the natural square root
 *
 * @n: number to check
 *
 * Return: the natural
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
