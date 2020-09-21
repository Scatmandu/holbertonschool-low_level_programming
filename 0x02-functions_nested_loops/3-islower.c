#include "holberton.h"
/**
* _islower- checks to see if an int is a lowercase letter
* @c: a char
* description: checks to see if an int is a lowercase letter
* Return: 0 or 1
**/
int _islower(int c)
{	
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
