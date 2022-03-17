#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 * Return: Index of value location
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
