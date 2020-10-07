#include "holberton.h"
/**
*_puts_recursion- putchars a string recursively
*@s: a string
*Return: void
**/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
