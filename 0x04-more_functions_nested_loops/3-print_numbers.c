#include "holberton.h"
/**
*print_numbers- entry point
*description: prints 0-9 followed by newline
*Return: null
**/
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
		if (n == '9')
		{
			_putchar('\n');
		}
	}
}
