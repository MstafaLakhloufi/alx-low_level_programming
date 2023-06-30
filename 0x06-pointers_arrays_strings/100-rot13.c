#include "main.h"

/**
 * rot13 - encodes a string using rot 13
 * @str: the string
 * Return: string
 */

char *rot13(char *str)
{
	int i, j;
	char *let1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *let2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for ((i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == let1[j]
			{
				str[i] = let2[j];
				break;
			}
		}
	}
	return (str);
}
