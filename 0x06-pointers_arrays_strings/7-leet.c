#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * @s: an input string to encode
 * Return: An encode string
 */
char *leet(char *s)
{
	int num1 = 0, num2;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[num1])
	{
		for (num2 = 0; num2 < 10; num2++)
			if (s[num1] == str[num2])
				s[num1] = subs[num2];

		num1++;
	}

	return (s);
}
