#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line in the output.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int maximum;
	long int j;

	n = 612852475143;
	maximum = -1;

	while (n % 2 == 0)
	{
		maximum = 2;
		n /= 2;
	}

	for (j = 3; j <= sqrt(n); j = j + 2)
	{
		while (n % j == 0)
		{
			maximum = j;
			n = n / j;
		}
	}

	if (n > 2)
		maximum = n;

	printf("%ld\n", maximum);

	return (0);
}
