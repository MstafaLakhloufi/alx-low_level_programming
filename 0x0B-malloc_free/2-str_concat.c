#include "main.h"

/**
 * _strlen - find length of the string
 * @str: string
 * Return: Always 0 (success)
*/

int _strlen(char *str)
{
	int size = 0;

	for (; str[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: the fisrt string
 * @s2: the second string
 * Return: Always 0 (success)
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, x;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	n = malloc((size1 + size2) * sizeof(char) + 1);

	if (n == 0)
		return (0);

	for (x = 0; x <= size1 + size2; x++)
	{
		if (x < size1)
			n[x] = s1[x];
		else
			n[x] = s2[x - size1];
	}
	n[x] = '\0';
	return (n);
}
