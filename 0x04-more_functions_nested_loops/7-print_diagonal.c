#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int a, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			for (sp = 0; sp < a; sp++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
