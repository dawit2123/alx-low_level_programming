#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - a fucntion that print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int num1;

	for (num1 = 0; num1 < n; num1++)
	{
		printf("%.2hhx", a[num1]);
		if (num1 < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - a function that prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
