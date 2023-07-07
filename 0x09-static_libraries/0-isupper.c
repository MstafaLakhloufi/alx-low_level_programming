#include "main.h"

/**
 * _isupper - check if c is upper
 * @c: character to be checked
 * Return: 1 if c uppercase, 0 if not
 */

int _isupper(int c)
{

	while (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
