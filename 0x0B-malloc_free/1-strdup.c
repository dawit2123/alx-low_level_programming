#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory.
 *           containing a copy of the string given as parameter.
 * @str:string
 *
 * Return:char
 */
char *_strdup(char *str)
{
	char *s;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		b++;

	s = malloc(sizeof(char) * (b + 1));

	if (s == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		s[a] = str[a];

	s[b] = '\0';

	return (s);
}
