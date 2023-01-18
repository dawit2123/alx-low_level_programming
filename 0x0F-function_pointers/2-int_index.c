#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to serch through
 * @size: size of array
 * @cmp: function used to compare
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int num1, num2;

	if (size > 0 && array && cmp)
	{
		for (num1 = 0; num1 < size; num1++)
		{
			num2 = cmp(array[num1]);
			if (num2)
				break;
		}
		if (num1 < size)
			return (num1);
	}
	return (-1);
}
