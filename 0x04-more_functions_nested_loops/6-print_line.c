#include "holberton.h"
/**
*print_line- entry point
*description: Prints _ equal to n if n > 0
*@n: an int
*Return: null
**/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
			if (i == n)
			{
				_putchar('\n');
			}
		}
	}
}
