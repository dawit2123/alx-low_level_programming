#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string.
 * @n: Number of bytes from n2 to concatenate.
 *
 * Return:Pointer to space in memory containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stri;
	unsigned int x, y, length1, length2;

/*Check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/*Compute the length of the strings*/

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;

	for (length2 = 0; s2[length2] != '\0'; length2++)
		;
/*Memory reservation-for case 1 & 2.*/
	stri = malloc(length1 + n + 1);
	if (stri == NULL)
	{
		return (NULL);
	}
/*Copy first string into stri.*/
	for (x = 0; s1[x] != '\0'; x++)
		stri[x] = s1[x];
/*copy second stringg into stri.*/
	for (y = 0; y < n; y++)
	{
		stri[x] = s2[x];
		x++;
	}

	stri[x] = '\0';
	return (stri);
}
