#include <stdio.h>
/**
 * main - prints the number arg
 * @argc: array int
 * @argv: array list
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
