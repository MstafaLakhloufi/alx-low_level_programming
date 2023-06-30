#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	char arr1[] = "aeotlAEOTL";
	char arr2[] = "4307143071";
	int i = 0, j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(str + i) == arr1[j]
			{
				*(str + i) = arr2[j];
			}
		}
		i++;
	}
	return (str);
}
