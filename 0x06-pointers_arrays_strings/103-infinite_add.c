#include "main.h"

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - adds numbers stored in two strings
 * @n1: string containing the first number to be added
 * @n2: string containing the second number to be added
 * @r: the buffer to store the result
 * @r_index: the current index of the buffer
 * Return: if r can store sum, pointer to the result
 *	if r cannot store the sum - 0;
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--; r_index--)
	{
		num = *(n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10.
	}
}
