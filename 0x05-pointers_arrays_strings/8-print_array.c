#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements integer array in enw line.
 * @a:integer
 * @n:integer
 *Return:void
 */
void print_array(int *a, int n)
{
int number1;
for (number1 = 0; number1 < n; number1++)
	{
	printf("%d", a[i]);
		if (number1 < (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}
