#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int num1, num2, c, num3;

	for (num1 = 48; num1 <= 50; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (num3 = 48; num3 <= 57; num3++)
				{
					if (num1 >= 50 && num2 >= 52)
						break;
					_putchar(num1);
					_putchar(num2);
					_putchar(58);
					_putchar(c);
					_putchar(num3);
					_putchar('\n');
				}
			}
		}
	}
}
