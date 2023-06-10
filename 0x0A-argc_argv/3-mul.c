#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: array int
 * @argv: array list
 * Return: 1 sucss
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
