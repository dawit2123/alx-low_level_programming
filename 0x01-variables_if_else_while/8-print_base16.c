#include <stdio.h>

/**
 * main -  all the numbers of base 16 in lowercase and new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (alphabet = 'a'; alphabet  <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
