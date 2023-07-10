#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter
 * @str: string
 * Return: Always 0 (success)
*/

char *_strdup(char *str)
{
	int x, size;
	char *n;

	if (str == 0)
		return (0);

	for (size = 0; str[size] != '\0'; size++)

	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
		return (0);
	else
	{
		for (x = 0; x < size; x++)
			n[x] = str[x];
	}
	return (n);
}
