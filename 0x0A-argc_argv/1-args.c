#include <stdio.h>
/**
 * main - print num
 *
 * @argc: int
 *
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc - 1);
	return (0);
}
