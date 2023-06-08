#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - if prime
 *
 * @n:numb
 *
 * Return: 1 if prime
 */

int  is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 *
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Return: 1 if prime
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
