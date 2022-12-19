#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
char a[100];
	int number1, number2, number3;

	number2 = 0;
	number3 = 0;
	srand(time(NULL));
	while (number2 < 2645)
	{
		number1 = rand() % 122;
		if (number1 > 32)
		{
			a[number3++] = number1;
			number2 += number1;
		}
	}
	a[number3++] = (2772 - number2);
	a[number3] = '\0';
	printf("%s", a);

	return (0);
}
