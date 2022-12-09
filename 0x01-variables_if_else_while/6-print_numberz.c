#include <stdio.h>

/**
 * main - all single digit numbers of base 10 starting from 0 and new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
		putchar(numbers);
	putchar('\n');

	return (0);
}
