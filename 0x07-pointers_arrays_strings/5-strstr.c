/*
 * File: 5-strstr.c
 */

#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int arr_index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		arr_index = 0;

		if (haystack[arr_index] == needle[arr_index])
		{
			do {
				if (needle[arr_index + 1] == '\0')
					return (haystack);

				arr_index++;

			} while (haystack[arr_index] == needle[arr_index]);
		}

		haystack++;
	}

	return ('\0');
}
