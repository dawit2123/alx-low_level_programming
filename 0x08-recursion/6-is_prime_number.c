#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - function that determines if a number is prime or not.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	int res = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, res));
}

/**
 * is_divisible - check if num is divisible
 * @num: the number to be checked
 * @res: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int num, int res)
{
	if (num % res == 0)
		return (0);

	if (res == num / 2)
		return (1);

	return (is_divisible(num, res + 1));
}
