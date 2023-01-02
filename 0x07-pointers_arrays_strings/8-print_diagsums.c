#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals.
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, maximum = size * size, res1 = 0, res2 = 0;

	for (; i < maximum; i += size + 1)
		res1 += a[i];

	for (i = size - 1; i < maximum - 1; i += size - 1)
		res2 += a[i];

	printf("%d, %d\n", res1, res2);
}
