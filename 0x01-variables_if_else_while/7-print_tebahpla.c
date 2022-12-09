#include <stdio.h>

/**
 * main - lowercase alphabet in reverse and new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; --alphabet)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
