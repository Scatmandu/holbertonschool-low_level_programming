#include "holberton.h"
/**
* _isdigit- entry point
* @c: an int
* description: checks if a digit is between 0 and 9
* Return: 1 or 0
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
