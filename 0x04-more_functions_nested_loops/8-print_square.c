#include "holberton.h"
/**
*print_square- entry point
*description: Prints a square size*size #'s big
*@size: an int describing the dimensions of a square
*Return: null
**/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (j == size)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
	}
}
