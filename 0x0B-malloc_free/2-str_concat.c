#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1:string1
 * @s2:string2
 * Return:char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, a, b;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	a = i + j + 1;
	s = malloc(a * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (b = 0; b < i; b++)
		s[b] = s1[b];
	for (b = 0; b < j; b++)
		s[b + i] = s2[b];
	s[i + j] = '\0';
	return (s);
}
