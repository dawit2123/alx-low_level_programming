#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: An input string to printing in the function
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
