#include "holberton.h"
/**
*_sqrt_recursion- finds square root of an int
*@n: an int
*Return: function square
**/
int _sqrt_recursion(int n)
{
	int x = 0;

	return (square(x, n));
}
/**
*square- calculates the square root of n
*@x: used to find square root of n
*@n: int to find square root of
*Return: x, -1, or square(x + 1, n)
**/
int square(int x, int n)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else if ((x * x) > n)
	{
		return (-1);
	}
	else
	{
		return (square(x + 1, n));
	}
}
