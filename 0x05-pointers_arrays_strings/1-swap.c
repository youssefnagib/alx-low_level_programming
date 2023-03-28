#include "main.h"
/**
 * swap_int - swab two values
 *
 * @a: input value
 *
 * @b: input value
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
