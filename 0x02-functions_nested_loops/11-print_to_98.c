#include "main.h"

/**
* print_to_98 - print to 98
*
* @n: input number
*/

void print_to_98(int n)
{
	int x;
	if (n <= 98)
	for (x = n; x <= 98 ; x++)
		printf("%d", x);
	else
		for (x = n; x >= n; x--)
			printf("%d", x);
}
