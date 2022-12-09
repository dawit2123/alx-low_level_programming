#include <stdio.h>

/**
 * main - all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k, y;

	i = 48;
	k = 49;
	y = 50;
	while  ((i < 56) && (k < 57) && (y < 58))
	{
		putchar(i);
		putchar(k);
		putchar(y);
		if ((i == 55) && (k == 56) && (y == 57))
		{
			putchar('\n');
			i++;
			k++;
			y++;
		}
		else
		{
			putchar(',');
			putchar(' ');
			if (y < 57)
			{
				y++;
			}
			else if ((k < 56) && (y == 57))
			{
				y = 1 + ++k;
			}
			else
			{
				k = ++i + 1;
				y = k + 1;
			}
		}
	}
	return (0);
}
