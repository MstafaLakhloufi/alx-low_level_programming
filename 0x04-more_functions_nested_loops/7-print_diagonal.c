#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int a, sp;

	if (a <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (sp = 1; sp <= a; sp++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
