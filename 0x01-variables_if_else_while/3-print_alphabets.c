#include <stdio.h>

/**
 * main - letter in lower case the upper and line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	character = 'a';
	while (character <= 'z')
	{
		putchar(character);
		++character;
	}
	character = 'A';
	while (character <= 'Z')
	{
		putchar(character);
		++c;
	}
	putchar('\n');
	return (0);
}
