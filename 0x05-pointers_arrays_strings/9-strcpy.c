#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcpy(char *dest, char *src)
{
int number1;

number1 = 0;
	while (src[number1])
	{
		dest[number1] = src[number1];
		number1++;
	}
dest[number1] = '\0';
return (dest);
}
