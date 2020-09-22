#include "holberton.h"
/**
* print_last_digit- prints the last digit of a number
* @n: an int
* description: prints the last digit of a number
* Return: null
**/
int print_last_digit(int n)
{
	int last = n % 10;

	if (n > 0)
	{
		_putchar('0' + last);
		return (last);
	}
	else if (n == 0)
	{
		_putchar('0' + last);
		return (0);
	}
	else
	{
		_putchar('0' + (last * -1));
		return (last * -1);
	}

}
