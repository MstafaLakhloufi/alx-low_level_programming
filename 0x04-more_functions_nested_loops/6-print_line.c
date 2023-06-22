#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n:  the number of times the character _ should be printed
 */

void print_line(int n)
{
	int lchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lchr = 1; lchr <= n; lchr++)
			_putchar('_');
		_putchar('\n');
	}
}
