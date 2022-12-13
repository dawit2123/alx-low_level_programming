#include<stdio.h>

/**
 * main - first 50 fibonatchi.
 *
 * Return: void.
 */
int main(void)
{
	long int x, y, z, i;

	x = 1;
	y = 2;
	z = 3;
	printf("%ld, ", x);
	printf("%ld, ", y);
	for (i = 3; i < 50; i++)
	{
		printf("%ld, ", z);
		x = y;
		y = z;
		z = x + y;
	}
	printf("%ld\n", z);

	return (0);
}
