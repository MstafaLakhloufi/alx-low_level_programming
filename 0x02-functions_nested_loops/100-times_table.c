#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: takes input
 */

void print_times_table(int n)
{
	int tab, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (mult = 1; mult <= n; ++mult)
			{
				_putchar(',');
				_putchar(' ');

				tab = num * mult;

				if (tab <= 9)
					_putchar(' ');
				if (tab <= 99)
					_putchar(' ');

				if (tab >= 100)
				{
					_putchar((tab / 100) + '0');
					_putchar((tab / 10) % 10 + '0');
				} else if (tab <= 99 && tab >= 10)
					_putchar((tab / 10) + '0');
				_putchar((tab % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
