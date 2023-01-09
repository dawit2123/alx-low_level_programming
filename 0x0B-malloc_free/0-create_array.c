#include "main.h"
#include <stdlib.h>
/**
 * create_array -  create and initializes it with a specific char.
 * @size:unssigned int
 * @c:char
 * Return:char
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *val;

	if (size == 0)
		return (NULL);
	val = malloc(size * sizeof(char));
	if (val == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		val[i] = c;
	}
	return (val);
}
