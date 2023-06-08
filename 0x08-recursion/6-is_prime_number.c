#include <stdio.h>
/**
 * checker - check number
 *
 * @n: num quared and compared
 *
 * @base: base num check
 *
 * Return: natural num base
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
 * @n: num
 *
 * Return: natural
 */
int _sqrt_recursion(int n)
{
		return (checker(1, n));
}
