#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the pointer to convert
 * Return: return an integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int m = 1, sgn = 0;

	while (s[i])
	{
		if (s[i] == 45)
			m *= -1;
		while (s[i] >= 48 && s[i] <= 57)
		{
			sgn = 1;
			n = (n * 10) + (s[i] - '0');
			i++;
		}
		if (sgn == 1)
			break;
		i++;
	}
	n *= m;
	return (n);
}
