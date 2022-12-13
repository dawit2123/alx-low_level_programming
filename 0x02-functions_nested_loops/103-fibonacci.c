#include <stdio.h>
/**
 * main - list all the natural numbers below 10
 *
 * Return: void
 */
int main(void)
{
	unsigned int i, j, y, x, s;

	i = 1;
	j = 2;
	y = 3;
	x = 2;
	for (s = 2; s <= 32; s++)
	{
		if (y % 2 == 0)
			x = x + y;
		i = j;
		j = y;
		y = i + j;
	}
	printf("%u\n", x);
	return (0);
}
