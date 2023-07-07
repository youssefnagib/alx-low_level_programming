#include "main.h"

/**
 * print_binary - binary to dec
 *
 * @n: input
 */

void print_binary(unsigned long int n)
{
	int i = 0;

	while ((n >> i) > 1)
	{
		i++;
	}

	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		i--;
	}
}
