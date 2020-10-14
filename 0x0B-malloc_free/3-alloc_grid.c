#include "holberton.h"
/**
*alloc_grid- prints a 2d array then changes its values
*@width: width of array
*@height: height of array
*Return: Null or arr
**/
int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(int *) * height);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			if (arr == NULL)
			{
				return (NULL);
			}
			else
			{
				arr[i] = malloc(sizeof(int) * width);
			}
		}
	}
return (arr);
}
