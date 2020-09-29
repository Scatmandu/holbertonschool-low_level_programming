#include "holberton.h"
/**
*puts2- entry point
*description: prints every other char of a string
*@str: string of chars
*Return: null
**/
void puts2(char *str)
{
	int i;

	for (; str[i] != '\0'; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
_putchar('\n');
}
