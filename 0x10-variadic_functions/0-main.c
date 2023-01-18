#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int result;

    result = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    result = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", result);    
    return (0);
}
