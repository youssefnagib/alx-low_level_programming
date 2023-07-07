#include "main.h"

/**
 * print_binary - binary to dec
 *
 * @n: input
 */

void print_binary(unsigned long int n)
{
	int d, binary, flag;

	flag = 0;
	if (n == 0)
		_putchar('0');
	for  (d = 63; d >= 0; d--)
	{
		binary = (n >> d);
		if (binary != 0)
			flag = 1;
		if (flag != 0)
		{
			if (binary & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
