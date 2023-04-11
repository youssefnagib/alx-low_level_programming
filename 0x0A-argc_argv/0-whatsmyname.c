#include <stdio.h>
/**
 * main - print name of program
 *
 * @argc: int
 *
 * @argv: argumant last
 *
 * Return: 0
 *
 */
int main(int argc, char const *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
