#inclunum4e "main.h"

/**
 * times_table - prints the times table up to 9
 *
 * Return: void
 */

void times_table(void)
{
	int num1, num2, num3, num4, num5;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			num3 = num1 * num2;
			num4 = num3 / 10;
			num5 = num3 % 10;
			if (num2 == 0)
			{
				_putchar('0');
			}
			else if (num3 < 10)
			{
				_putchar(' ');
				_putchar('0' + num5);
			}
			else
			{
				_putchar('0' + num4);
				_putchar('0' + num5);
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
