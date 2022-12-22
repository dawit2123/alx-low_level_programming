int check_seperators(char c);

/**
 * cap_string - a function that capitalizes all words of a string.
 * @b: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *b)
{
	int x = 0;

	while (b[x])
	{
		if (x == 0 && (b[x] >= 'a' && b[x] <= 'z'))
			b[x] -= 32;

		if (check_seperators(b[x]) && (b[x + 1] >= 'a' && b[x + 1] <= 'z'))
			b[x + 1] -= 32;
		x++;
	}

	return (b);
}

/**
 * check_seperators - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @cha: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperators(char cha)
{
	int x = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; x < 13; x++)
	{
		if (cha == seperators[x])
			return (1);
	}
	return (0);
}
