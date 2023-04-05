#include <unistd.h>
#include "main.h"
/**
 * _putchar- write chracter c to stdio
 *
 * @c: the chracter to the point
 * Return: on success 1.
 *        on error -1.
 */

int _putchar(char c);
{
	return (write(1, &c, 1));
}
