#include <stdlib.h>
#include "main.h"

/**
 * word_count - function for help to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int word_count(char *s)
{
	int flg, ch, w;

	flg = 0;
	w = 0;

	for (ch = 0; s[ch] != '\0'; ch++)
	{
		if (s[ch] == ' ')
			flg = 0;

		else if (flg == 0)
		{
			flg = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **mtrx, *temp;
	int x, y = 0, len = 0, wrds, c = 0, start, end;

	while (*(str + len))
		len++;

	wrds = word_count(str);

	if (wrds == 0)
		return (NULL);

	mtrx = (char **) malloc(sizeof(char *) * (wrds + 1));

	if (mtrx == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;

				temp = (char *) malloc(sizeof(char) * (c + 1));

				if (temp == NULL)
					return (NULL);

				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				mtrx[y] = temp - c;
				y++;
				c = 0;
			}
		}

		else if (c++ == 0)
			start = x;
	}

	mtrx[y] = NULL;
	return (mtrx);
}
