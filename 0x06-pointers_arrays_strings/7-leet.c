#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @st: an input string to encode
 * Return: An encode string
 */
char *leet(char *st)
{
	int k = 0, l;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[k])
	{
		for (l = 0; l < 10; l++)
			if (s[i] == str[l])
				s[i] = subs[l];

		k++;
	}

	return (st);
}
