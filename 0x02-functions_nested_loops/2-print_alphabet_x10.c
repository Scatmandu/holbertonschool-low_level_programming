#include "holberton.h"
/**
* print_alphabet_x10- prints alphabet x10
* description: prints alphabet x10
* Return: null
**/
void print_alphabet_x10(void)
{
	int a, x;

	for (x = '0'; x <= '9'; x++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
