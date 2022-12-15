#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int n1, n2;

		for (n1 = 1; n1 <= size; n1++)
		{
			for (n2 = n1; n2 < size; n2++)
			{
				_putchar(' ');
			}

			for (n2 = 1; n2 <= n1; n2++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
