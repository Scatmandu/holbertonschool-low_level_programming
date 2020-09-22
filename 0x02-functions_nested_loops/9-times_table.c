#include "holberton.h"
/**
* times_table- entry point
* description: Prints times table 0-9
* Return: null
**/
void times_table(void)
{
	int n1;
	int n2;
	int mult;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			mult = n1 * n2;

			if (((mult) < 10) && (n2 != 9))
			{
				_putchar('0' + (mult));
				_putchar(',');
				_putchar(' ');
				if (((n2 + 1) * n1) < 10)
				{
					_putchar(' ');
				}
			}
			else if (((mult) >= 10) && (n2 != 9))
			{
				_putchar('0' + ((mult) / 10));
				_putchar('0' + ((mult) % 10));
				_putchar(',');
				_putchar(' ');
			}
			else if ((n2 > 8) && ((mult) < 10))
			{
				_putchar('0' + (mult));
				_putchar('\n');
			}
			else if ((n2 > 8) && ((mult) > 10))
			{
				_putchar('0' + ((mult) / 10));
				_putchar('0' + ((mult) % 10));
				_putchar('\n');
			}
		}
	}
}
