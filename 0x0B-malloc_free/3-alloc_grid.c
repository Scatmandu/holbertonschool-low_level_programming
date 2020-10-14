#include "holberton.h"
/**
*
*
*
*
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
