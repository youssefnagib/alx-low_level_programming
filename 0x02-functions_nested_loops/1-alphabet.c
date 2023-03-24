#include "main.h"
/**
 * print alphabet - utilizes on the _putchar.
 *
 * description: the alphabet a - z.
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
}
