#include "holberton.h"
/**
* _abs- entry point
* description: gives absolute value of an int
* @r: an int given by main file
* Return: absolute value
**/
int _abs(int r)
{
	int sign = -1;

	if (r < 0)
	{
		return (0 + (r * sign));
	}
	else
	{
		return (r + 0);
	}

}
