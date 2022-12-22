#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a  string
 * to upper case
 * @b: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *b)
{
	char *begin = b;

	while (*b)
	{
		if (*b >= 'a' && *b <= 'z')
			*b -= 32;
		b++;
	}
	return (begin);
}
