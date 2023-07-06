#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * @i: square root
 * Return: int
*/

int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/*
 * square - find square root of a number
 * @n: integer to find the sqaure root of
 * @i: square root
 *
 * Return: the resulting square root
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
