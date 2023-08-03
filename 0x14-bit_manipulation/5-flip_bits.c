#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to converts
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		curr = exclusive >> i;
		if (curr & 1)
			counter++;
	}
	return (counter);
}
