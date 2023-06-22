#include "main.h"

/**
 * print_number - Prints an integer
 * @n: integer to print
 * Return: no return
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('_');
		a = -a;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar(n % 10 + '0');
}
