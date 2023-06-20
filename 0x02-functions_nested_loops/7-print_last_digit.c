#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be treated
 * Return: last digit
 */

int print_last_digit(int n)
{

	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + 48);
	return (last_digit);
}
