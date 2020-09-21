#include "holberton.h"
/**
* print_alphabet - prints the lowercase alphabet then a newline
* description: prints lowercase alphabet then newline
* Return: 0
**/
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
_putchar('\n');
}
