#include "main.h"

/**
 * puts2 - prints every other character of a string in new line
 * @str:pointer char
 * return:void
 */
void puts2(char *str)
{
	int number1, number2;
number1 = 0;
number2 = 0;
	while (str[number1++])
	{
		number1++;
	}
for (number1 = 0; number1 < x; number1 += 2)
{
_putchar(*(str + number1));
}
_putchar('\n');
}
