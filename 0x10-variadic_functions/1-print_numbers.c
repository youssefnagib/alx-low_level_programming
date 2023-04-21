#include "variadic_functions.h"

/**
 * print_strings - Prints strs.
 *
 * @separator: str to printed between strs
 *
 * @n: num of strs passed to the func.
 *
 * @...: variable num of strs to printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
