#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - posit numbers
 * @argc: array int
 * @argv: array list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
