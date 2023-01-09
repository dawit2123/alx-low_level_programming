#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 * @s: string
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int i, number1 = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				number1++;
		}
		else if (i == 0)
			number1++;
	}
	number1++;
	return (number1);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, character = 0;
	char **pointer;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	 pointer = (char **)malloc(n * sizeof(char *));
	if (pointer == NULL)
		return (NULL);
	pointer[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			pointer[character] = (char *)malloc(j * sizeof(char));
			j--;
			if (pointer[character] == NULL)
			{
				for (k = 0; k < character; k++)
					free(pointer[k]);
				free(pointer[n - 1]);
				free(pointer);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				pointer[character][l] = str[i + l];
			pointer[character][l] = '\0';
			character++;
			i += j;
		}
		else
			i++;
	}
	return (pointer);
}
