#include "main.h"

/**
 * puts_half -  prints half of a string in new line
 * @str:char
 * Return:int
 */
void puts_half(char *str)
{
	int number1, number2;

	number1 = 0;
	while (str[number1])
		number1++;
	number2 = number1 / 2;
	if (i % 2)
		number2 += 1;
	while (number2 < number1)
	{
		_putchar(str[number2]);
		number2++;
	}
	_putchar('\n');
}
