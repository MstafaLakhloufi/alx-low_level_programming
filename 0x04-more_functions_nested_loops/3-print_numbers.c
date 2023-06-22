#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	int num = 0;

	while (num >= 48 && num <= 57)
	{
		_putchr(num + 48);
		num++;
	}
	_putchar('\n');
}
