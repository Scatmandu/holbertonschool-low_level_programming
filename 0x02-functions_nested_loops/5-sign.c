#include "holberton.h"
/**
* print_sign- entry point
* @n: an int
* description: checks if an int is more, less, or equal to zero
* Return: 0, 1, or -1
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
