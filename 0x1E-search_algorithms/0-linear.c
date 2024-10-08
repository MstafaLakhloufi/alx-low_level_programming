#include "search_algos.h"

/**
  * linear_search - function tolook for a value in an arrray of integers
  * @array: ptr to the first element  in the array.
  * @size: number of elements in the array.
  * @value: Value to search for.
  * Return: The first index of the value in the array Otherwise(-1).
  */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
