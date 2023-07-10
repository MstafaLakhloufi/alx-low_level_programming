#include "main.h"

/**
 * *create_array - creates an array of chars,
 *	and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize
 * Return: Always 0 (success)
 */

char *create_array(unsigned int size, char c)
{

	if (size == 0)
		return (0);

	char *arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (0);

	for (unsigned int i = 0; i < size; i++)
		i
	{
		arr[i] = c;
	}

	return (arr);
}
