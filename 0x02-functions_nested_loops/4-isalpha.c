#include "holberton.h"
/**
* _isalpha- tests if an int is a letter of the alphabet
* @c: an int
* description- tests if an int is a letter of the alphabet
* Return: 1 or 0
**/
int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
