#include <stdio.h>

/**
 * main - all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k;

	i = 48;
	k = 49;
	while (i < 58)
	{
		putchar(i);
		putchar(k);
		if ((i == 56) && (k == 57))
		{
			putchar('\n');
			i++;
			k++;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (k < 57)
		{
			k++;
		}
		else
		{
			i++;
			k = i + 1;
		}
	}
	return (0);
}
