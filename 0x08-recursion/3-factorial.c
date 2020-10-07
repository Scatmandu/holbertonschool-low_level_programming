#include "holberton.h"
/**
*factorial- gets factorial for a given number
*@n: number to get factorial for
*Return: (n * factorial - 1) or 1
**/
int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
