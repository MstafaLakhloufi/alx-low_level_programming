#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min int
 * @max: max int
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
