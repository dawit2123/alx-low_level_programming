#include "main.h"

/**
 * rot13 - a function that encodes a string into rot13
 * @st: string to encode
 *
 * Return: address of s
 */
char *rot13(char *st)
{
	int i, k;
	char a[] = "abcdefghkjklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(st + i); i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (a[k] == *(st + i))
			{
				*(st+ i) = b[k];
				break;
			}
		}
	}
	return (s);
}
