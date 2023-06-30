#include "main.h"

/**
 * rot13 - encodes a string using rot 13
 * @str: the string
 * Return: string
 */

char *rot13(char *str)
{
	int i;

	char let1 = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char let2 = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == let1[i]
			{
				*str = let2[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
