#include "main.h"

/**
 * print_binary - binary to dec
 *
 * @n: input
 */

void print_binary(unsigned long int n)
{
	int d = 0;

	while ((n >> d) > 1)
	{
		d++;
	}
	while (d >= 0)
	{
		if ((n >> d) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		d--;
	}
}
