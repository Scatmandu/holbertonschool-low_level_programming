#include "holberton.h"
/**
* jack_bauer- entry point
* description: Prints time from 00:00 to 23:59
* Return: null
**/
void jack_bauer(void)
{
	int m, h;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar('0' + h);
				_putchar(':');
			}
			else
			{
				_putchar('0' + (h / 10));
				_putchar('0' + (h % 10));
				_putchar(':');
			}
			if (m < 10)
			{
				_putchar('0');
				_putchar('0' + m);
				_putchar('\n');
			}
			else
			{
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
				_putchar('\n');
			}
		}
	}
}
