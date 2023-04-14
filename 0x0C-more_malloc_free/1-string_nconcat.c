#include "main.h"
#include <stdlib.h>
/***/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, n1, n2, s1_length, s2_length;

	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	if (n >= n2)
	{
		s2_length = n2;

	} else
	{
		for (n2 = 0; n2 < n; n2++)
			s2_length++;
	}
	str = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < s2_length; i++)
	{
		str[i] = s2[s1_length];
		s1_length++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
