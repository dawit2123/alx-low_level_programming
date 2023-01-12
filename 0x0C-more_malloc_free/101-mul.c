#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _is_zero - a program that multiplies two positive numbers.
 * @argv: argument vector.
 *
 * Return: no return.
 */

void _is_zero(char *argv[])
{
	int i, number1 = 1, number2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			number1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			number2 = 0;
			break;
		}

	if (number1 == 1 || number2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */

char *_initialize_array(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */

int _checknum(char *argv[], int n)
{
	int num3;

	for (num3 = 0; argv[n][num3]; num3++)
		if (!isdigit(argv[n][num3]))
		{
			printf("Error\n");
			exit(98);
		}

	return (num3);
}

/**
 * main - Entry point.
 * a program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int num1, num2, lnout, sum, suml, i, j, k, caus;
	char *ch;

	if (argc != 3)
		printf("Error\n"), exit(98);
	num1 = _checknum(argv, 1), num2 = _checknum(argv, 2);
	_is_zero(argv), lch = num1 + num2, ch = malloc(lch + 1);
	if (ch == NULL)
		printf("Error\n"), exit(98);
	ch = _initialize_array(ch, lch);
	k = lch - 1, i = num1 - 1, j = num2 - 1, caus = suml = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (suml > 0)
			{
				sum = (ch[k] - '0') + suml;
				if (sum > 9)
					ch[k - 1] = (sum / 10) + '0';
				ch[k] = (sum % 10) + '0';
			}
			i = num1 - 1, j--, suml = 0, caus++, k = lch - (1 + caus);
		}
		if (j < 0)
		{
			if (ch[0] != '0')
				break;
			lch--;
			free(ch), ch = malloc(lch + 1), ch = _initialize_array(ch, lch);
			k = lch - 1, i = num1 - 1, j = num2 - 1, caus = suml = 0;
		}
		if (j >= 0)
		{
			sum = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (ch[k] - '0') + suml;
			suml = sum / 10, ch[k] = (sum % 10) + '0';
		}
	}
	printf("%s\n", ch);
	return (0);
}
