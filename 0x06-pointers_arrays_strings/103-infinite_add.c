#include "main.h"

/**
 * infinite_add - a function that adds two numbers.
 * @n1:char
 * @n2:char.
 * @r:char
 * @size_r:int
 * Return:char.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, b, k, l, m, n;

	for (i = 0; n1[i]; i++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (i > size_r || b > size_r)
		return (0);
	m = 0;
	for (i -= 1, b -= 1, k = 0; k < size_r - 1; i--, b--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (b >= 0)
			n += n2[b] - '0';
		if (i < 0 && b < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || b >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
