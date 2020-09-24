#include "holberton.h"
/**
*print_most_numbers- entry point
*description: prints 0-9 followed by newline excluding 2 and 4
*Return: null
**/
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		if (n == '9')
		{
			_putchar('\n');
		}
	}
}
