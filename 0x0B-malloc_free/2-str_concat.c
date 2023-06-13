#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @s1: str1
 * @s2: str2
 * Return: int
 *
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0, i, j = 0;
	char *ans;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	ans = malloc((len) * sizeof(char));
	if (ans == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ans[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		ans[j++] = s2[i];
	}
	return (ans);
}
