#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1:char
 * @n2:char.
 * @r:char
 * @size_r:int
 * Return:char.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int b, d, k, l, a, n;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (a > saze_r || b > saze_r)
		return (0);
	d = 0;
	for (a -= 1, b -= 1, k = 0; k < saze_r - 1; a--, b--, k++)
	{
		n = d;
		if (a >= 0)
			n += n1[a] - '0';
		if (b >= 0)
			n += n2[b] - '0';
		if (a < 0 && b < 0 && n == 0)
		{
			break;
		}
		d = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (a >= 0 || b >= 0 || d)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		d = r[k];
		r[k] = r[l];
		r[l] = d;
	}
	return (r);
}
