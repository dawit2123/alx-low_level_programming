#include <stdio.h>

/**
 * main - the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	character = 'a';
	while (character <= 'z')
	{
		if ((character !=  'e') && (character != 'q'))
		{
			putchar(character);
			++character;
		}
		else
			++character;
	}
	putchar('\n');

	return (0);
}

