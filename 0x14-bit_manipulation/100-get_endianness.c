#include "main.h"

/**
 * get_endianness -  checks the endianness.
 * Return: 0 for big end, 1 for little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *ch = (char *) &x;

	return (*ch);
}
