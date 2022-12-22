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
int a, b, c, d, e, n;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (a > size_r || b > size_r)
		return (0);
	c = 0;
	for (a -= 1, b -= 1, e = 0; e < size_r - 1; a--, b--, e++)
	{
		n = c;
		if (a >= 0)
			n += n1[a] - '0';
		if (b >= 0)
			n += n2[b] - '0';
		if (a < 0 && b < 0 && n == 0)
		{
			break;
		}
		c = n / 10;
		r[e] = n % 10 + '0';
	}
	r[e] = '\0';
	if (a >= 0 || b >= 0 || c)
		return (0);
	for (e -= 1, d = 0; d < e; e--, d++)
	{
		c = r[e];
		r[e] = r[d];
		r[d] = c;
	}
	return (r);
}
