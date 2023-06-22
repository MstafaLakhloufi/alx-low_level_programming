#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != 4)
		{
			_putchar(num);
		}
		num++;
	}

	_putchar('\n');
}
