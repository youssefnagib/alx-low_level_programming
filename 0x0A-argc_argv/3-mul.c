#include <stdio.h>
#include <stdlib.h>

/**
 * main - print
 *
 * @argc: int
 *
 * @argv: array
 *
 * Return: 1 , 0 otherwise
 */

int main(int argc, char *argv[])
{
	int n1, n2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	ans = n1 * n2;
	printf("%d\n", ans);
	return (0);
}
