#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter
 * @str: string
 * Return: Always 0 (success)
*/

char *_strdup(char *str)
{
	int x = 0, y = 1;
	char *n;

	if (str == NULL)
		return (NULL);

	while (str[y])
		y++;

	n = malloc((sizeof(char) * y) + 1);

	if (n == NULL)
		return (NULL);

	while (x < y)
	{
		n[x] = str[x];
		x++;
	}

	n[x] = '\0';
	return (n);
}
