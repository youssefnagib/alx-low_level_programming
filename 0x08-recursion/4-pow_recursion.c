#include "main.h"
#include <math.h>
/***/
int _pow_recursion(int x, int y)
{
	int sum = pow(x, y);
	
	if (y < 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", sum)
	}
}
