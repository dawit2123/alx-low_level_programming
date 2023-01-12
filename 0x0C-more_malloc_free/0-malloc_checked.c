#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - a function that allocates memory using malloc.
  * @b: the size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
	void *pnt;

	pnt = malloc(b);

	if (pnt == NULL)
		exit(98);

	return (pnt);
}
