#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - a function that splits a string into words.
 * @s: string
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int num1, num = 0;

	for (num1 = 0; s[num1]; num1++)
	{
		if (s[num1] == ' ')
		{
			if (s[num1 + 1] != ' ' && s[num1 + 1] != '\0')
				num++;
		}
		else if (num1 == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, l, chara, n = 0, m;
	char **pt;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	 pt = (char **)malloc(n * sizeof(char *));
	if (pt == NULL)
		return (NULL);
	pt[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			pt[chara] = (char *)malloc(j * sizeof(char));
			j--;
			if (pt[chara] == NULL)
			{
				for (m = 0; m < chara; m++)
					free(pt[m]);
				free(pt[n - 1]);
				free(pt);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				pt[chara][l] = str[i + l];
			pt[chara][l] = '\0';
			chara++;
			i += j;
		}
		else
			i++;
	}
	return (pt);
}
