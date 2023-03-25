#include "main.h"
/**
 * print_sign - print + if n greater then zero
 * print 0 if n =0
 * print - if n smaller then 0.
 *
 * Return: 1 if +, 0 if 0, -1 if -;
 *
 * @n: takes in type input function
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
