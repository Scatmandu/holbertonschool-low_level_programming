#include "holberton.h"
/**
*puts2- entry point
*description: prints every other char of a string
*@str: string of chars
*Return: null
**/
void puts2(char *str)
{
	int count = 0;

	for (; str[count] != '\0'; count++)
	{
		if (str[count] == 0 || str[count] % 2 == 0)
		{
			_putchar(str[count]);
		}
	}
_putchar('\n');
}
