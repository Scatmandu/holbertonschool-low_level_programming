#include "holberton.h"
/**
*_pow_recursion- takes x to the power of y
*@x: number to take to the yth power
*@y: number to take x to the power of
*Return: x^y, 1, or -1
**/
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * (_pow_recursion(x, y - 1)));

	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
