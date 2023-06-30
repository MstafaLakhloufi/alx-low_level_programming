#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int ch, a;

	ch = 0;

	while (dest[ch])
		ch++;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[ch + a] = src[a];

	dest[ch + a] = '\0';

	return (dest);
}
