#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int number = 0;
	int y;

	while (number < n--)
	{
		y = a[number];
		a[number++] = a[n];
		a[n] = y;
	}
}
