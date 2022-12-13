#include<stdio.h>

/**
 * main - first 50 fibonatchi.
 *
 * Return: void.
 */
int main(void)
{
	unsigned long int n, n0, n1, l, l0, l1, m, m0, m1, k, y;

	n = 1;
	l = 2;
	m = n + l;

	printf("%lu, ", n);
	printf("%lu, ", l);
	for (y = 3; y < 89; y++)
	{
		printf("%lu, ", m);
		n = l;
		l = m;
		m = n + l;
	}
	l0 = l / 1000000000;
	l1 = l % 1000000000;
	m0 = m / 1000000000;
	m1 = m % 1000000000;
	for (k = 89; k < 98; k++)
	{
		printf("%lu%lu, ", m0, m1);
		n0 = l0;
		n1 = l1;
		l0 = m0;
		l1 = m1;
		m0 = n0 + l0 + ((n1 + l1) / 1000000000);
		m1 = (n1 + l1) % 1000000000;
	}
printf("%lu%lu\n", m0, m1);
	return (0);
}
