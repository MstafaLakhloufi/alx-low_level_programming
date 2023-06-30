#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @ch: string
 * Return: string
 */

char *leet(char *ch)
{
	char *cp = ch;
	char arr1[] = {'A', 'E', 'O', 'T', 'L'};
	int arr2[] = {4, 3, 0, 7, 1}
	unsigned int i;

	while (*ch)
	{
		for (i = 0; i < sizeof(arr1) / sizeof(char); i++)
		{
			if (*ch == arr1[i] || *ch == arr1[i] + 32)
			{
				*ch = 48 + arr2[i];
			}
		}
		ch++;
	}
	return (cp);
}
