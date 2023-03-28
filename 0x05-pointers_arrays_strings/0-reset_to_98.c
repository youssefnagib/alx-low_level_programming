#include "main.h"
/**
 * reset_to_98 - rest value of n to 98
 *
 * @n: input value
 */

void reset_to_98(int *n)
{
	int **ptr = &n;
	**ptr = 98;
}
