#include "search_algos.h"

/**
  * linear_search - function tolook for a value in an arrray of integers
  * @array: ptr to the first element  in the array.
  * @size: number of elements in the array.
  * @value: Value to search for.
  * Return: (-1) If value is not in array or array is NULL.
  *         Otherwise, first index of value
  * Description: Print each value in the array as it gets compared.
  */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Value checked array[%u] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
	}
	return (-1);
}
