#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string parameter
 * Return: length of strings
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		++len;
	return (len);
}
