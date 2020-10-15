#include "holberton.h"
/**
*array_range- displays a range of ints
*@min: min value of a range
*@max: max value of a range
*Return: arr or NULL
**/
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int minmax = max - min + 1;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * minmax);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < minmax; i++, min++)
	{
		arr[i] = min;
	}
return (arr);
}
