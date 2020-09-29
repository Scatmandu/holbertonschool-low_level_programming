#include "holberton.h"
/**
*_puts- entry point
*description: prints a string
*@str: a string
*Return: null
**/
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
