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

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * max - min + 1);
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++, min++)
	{
		arr[i] = min;
	}
arr[i] = '\0';
return (arr);
}
