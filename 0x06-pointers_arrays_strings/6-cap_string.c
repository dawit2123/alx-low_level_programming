int check_seperators(char c);

/**
 * cap_string - capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int number = 0;

	while (s[number])
	{
		if (number == 0 && (s[number] >= 'a' && s[number] <= 'z'))
			s[number] -= 32;

		if (check_seperators(s[number]) && (s[number + 1] >= 'a' && s[number + 1] <= 'z'))
			s[number + 1] -= 32;
		number++;
	}

	return (s);
}

/**
 * check_seperators - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
