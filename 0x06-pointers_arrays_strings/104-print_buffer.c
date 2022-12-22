#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 * @b: char
 * @size: int
 * Return:void
 */
void print_buffer(char *b, int size)
{
	int number, i;

	for (number = 0; number < size; number += 10)
	{
		printf("%08number: ", number);

		for (i = 0; i < 10; i++)
		{
			if ((i + number) >= size)
				printf("  ");

			else
				printf("%02number", *(b + i + number));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + number) >= size)
				break;

			else if (*(b + i + number) >= 31 &&
				 *(b + i + number) <= 126)
				printf("%c", *(b + i + number));

			else
				printf(".");
		}

		if (number >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
