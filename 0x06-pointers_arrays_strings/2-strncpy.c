#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest:char
 *  @src:char
 * @n:int
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
int number;

number = 0;
	while (number < n && *(src + number))
	{
	*(dest + number) = *(src + number);
	number++;
	}
	while (number < n)
	{
	*(dest + number) = '\0';
	number++;
	}
	return (dest);
}
