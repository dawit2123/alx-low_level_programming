#include "main.h"
#include <stdint.h>
/**
 * get_endianness - a fucntion that checks the endianness.
 *
 * Return: void
 */

int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *point_char = (char *)&x;

	return (*point_char == 0x10);
}
