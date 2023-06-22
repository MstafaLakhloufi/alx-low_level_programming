#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int num;

	while (num >= 48 && num <= 57)
	{
		_putchr("%d", num);
		num++;
	}
	_putchar("\n");

	return (0);
}
