#include <stdio.h>

/**
* main - all possible combinations of single-digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int number;

	number = 48;
	while  (number < 58)
	{
		putchar(number);
		if (number !=  57)
		{
			putchar(44);
			putchar(32);
			number++;
		}
		else
		{
			number++;
		}
	}
	putchar('\n');
	return (0);
}
