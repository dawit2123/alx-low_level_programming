#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: void.
 */
int main(void)
{
	unsigned long int num1, num10, num11, number2, number20, number21, e, e0, e1, y, num3;

	num1 = 1;
	number2 = 2;
	e = num1 + number2;

	printf("%lu, ", num1);
	printf("%lu, ", number2);
	for (y = 3; y < 89; y++)
	{
		printf("%lu, ", e);
		num1 = number2;
		number2 = e;
		e = num1 + number2;
	}
	number20 = number2 / 1000000000;
	number21 = number2 % 1000000000;
	e0 = e / 1000000000;
	e1 = e % 1000000000;
	for (num3 = 89; num3 < 98; num3++)
	{
		printf("%lu%lu, ", e0, e1);
		num10 = number20;
		num11 = number21;
		number20 = e0;
		number21 = e1;
		e0 = num10 + number20 + ((num11 + number21) / 1000000000);
		e1 = (num11 + number21) % 1000000000;
	}
printf("%lu%lu\n", e0, e1);
	return (0);
}
