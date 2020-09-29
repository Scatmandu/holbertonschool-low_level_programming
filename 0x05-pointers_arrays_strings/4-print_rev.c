#include "holberton.h"
/**
*print_rev- entry point
*description: prints a string in reverse
*@s: a string of chars
*Return: null
**/
void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
_putchar('\n');
}
