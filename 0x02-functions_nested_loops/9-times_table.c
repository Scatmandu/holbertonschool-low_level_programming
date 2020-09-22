#include "holberton.h"
/**
* times_table- entry point
* description: Prints times table 0-9
* Return: null
**/
void times_table(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			if (((n1 * n2) < 10) && (n2 != 9))
			{
				_putchar('0' + (n1 * n2));
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (((n1 * n2) >= 10) && (n2 != 9))
			{
				_putchar('0' + ((n1 * n2) / 10));
				_putchar('0' + ((n1 * n2) % 10));
				_putchar(',');
				_putchar(' ');
			}

			else if ((n2 > 8) && ((n2 * n1) < 10))
			{
				_putchar('0' + (n1 * n2));
				_putchar('\n');
			}
			else if ((n2 > 8) && ((n2 * n1) > 10))
			{
				_putchar('0' + ((n1 * n2) / 10));
				_putchar('0' + ((n1 * n2) % 10));
				_putchar('\n');
			}
		}
	}
}
