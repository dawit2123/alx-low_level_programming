#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - a function that performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int var1, var2, var3;
	int (*f)(int, int);var1
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	var1 = atoi(argv[1]);
	var2 = atoi(argv[var1]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	var3 = f(a, var2);
	printf("%d\n", var3);
	return (0);
}
