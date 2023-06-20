#include "main.h"

/**
 * _abs - The function that computes the absolute value of an integer
 * @c: the number to be computed
 * Return: Always 0
 */

int _abs(int c)
{
	if (c < 0)
		c = (-1) * c;
	return (c);
}
