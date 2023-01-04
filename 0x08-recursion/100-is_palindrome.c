#include "main.h"
/**
 * _strlen_recursion - function that returns checks whether it is palidrome.
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);

	}
	return (x);
}
/**
 * check_palindrome - checks to see if a string is a palindrome
 * @x:int
 * @y:int
 * @s: string
 * Return: int
 */
int check_palindrome(int x, int y, char *s)
{
	if (x >= y)
		return (1);
	else if (s[x] != s[y])
		return (0);
	else
		return (check_palindrome(x + 1, y - 1, s));
}
/**
 * is_palindrome - states if a string is a palindrome
 * @s:string
 * Return: int
 */
int is_palindrome(char *s)
{
	int x;

	x = _strlen_recursion(s) - 1;
	return (check_palindrome(0, x, s));
}
