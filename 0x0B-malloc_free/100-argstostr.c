#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int x, y, n = 0, m = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			m++;
	}

	m += ac;

	s = malloc(sizeof(char) * m + 1);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			s[n] = av[x][y];
			n++;
		}

		if (s[n] == '\0')
		{
			s[n++] = '\n';
		}

	}

	return (s);
}
