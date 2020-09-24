#include "holberton.h"
/**
*more_numbers- entry point
*description: prints 0-14
*Return: null
**/
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar('0' + (n / 10));
			}

			_putchar('0' + (n % 10));

			if (n == 14)
			{
				_putchar('\n');
			}
		}
	}
}
