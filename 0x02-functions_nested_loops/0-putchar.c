#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int string[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int counter, siz;

	siz = sizeof(string) / sizeof(int);
	for (counter = 0; counter < siz; counter++)
	{
		_putchar(string[counter]);
	}
	_putchar('\n');
	return (0);
}
