#include "main.h"
int _sqrt(int previous, int square_root);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @previous: previous value
 * @square_root: square root value
 * Return: the square root
 */
int _sqrt(int previous, int square_root)
{
	if (previous > square_root)
		return (-1);
	else if (previous * previous == square_root)
		return (previous);
	return (_sqrt(previous + 1, square_root));
}
