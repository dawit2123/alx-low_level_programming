#include"main.h"

/**
 * swap_int-swaps the values of two integers using a pointer
 * @a:integer
 * @b:intger
 * return:void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
	return;

}
