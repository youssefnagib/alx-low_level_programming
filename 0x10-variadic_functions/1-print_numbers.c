#include "variadic_functions.h"

/**
 * print_numbers - Prints strs.
 *
 * @separator: str to printed between strs
 *
 * @n: num of strs passed to the func.
 *
 * @...: variable num of strs to printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1) && separator != NULL)
			printf("%d%s", va_arg(valist, unsigned int), separator);
		else
			printf("%d", va_arg(valist, unsigned int));
	}
	printf("\n");
	va_end(valist);
}
