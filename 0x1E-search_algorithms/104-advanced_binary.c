#include "search_algos.h"

/**
 * advanced_binary - recursively finds a value's index with binary sort
 * @array: array to search through
 * @size: The size of the array
 * @value: The value to search for
 * Return: index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recursive_binary(array, value, 0, (int)size - 1));
}

/**
 * recursive_binary - recursively finds a value at an index
 * @array: array to search through
 * @value: The value to search for
 * @low: The lowest index
 * @high: The highest index
 * Return: index where value is located
 */
int recursive_binary(int *array, int value, int low, int high)
{
	int middle = 0;

	if (high >= low)
	{
		middle = low + (high - low) / 2;
		if (array[middle] == value)
		{
			print_array(array, low, high);
			if (array[middle - 1] == value)
			{
				return (recursive_binary(array, value, low, middle));
			}
			return (middle);
		}
		if (array[middle] > value)
		{
			print_array(array, low, high);
			return (recursive_binary(array, value, low, middle - 1));
		}
		else
		{
			print_array(array, low, high);
			return (recursive_binary(array, value, middle + 1, high));
		}
	}
	return (-1);
}

/**
 * print_array - prints the array
 * @array: array to print
 * @low: lowest index
 * @high: highest index
 */

void print_array(int *array, int low, int high)
{
	printf("Searching in array: ");

	while (low <= high)
	{
		printf("%d", array[low]);

		if (low != high)
			printf(", ");
		low++;
	}
	printf("\n");
}
