#include "holberton.h"
/**
*puts_half- entry point
*description: prints the last half of a string
*@str: a string of chars
*Return: null
**/
void puts_half(char *str)
{
	int i;
	int half;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		for (half = i / 2; str[half] != '\0'; half++)
		{
			_putchar(str[half]);
		}
	}
	else
	{
		for (half = (i + 1) / 2; str[half] != '\0'; half++)
		{
			_putchar(str[half]);
		}
	}
_putchar('\n');
}
