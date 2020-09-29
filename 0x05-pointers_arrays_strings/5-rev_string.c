#include "holberton.h"
/**
*rev_string- entry point
*description: reverses a string
*@s: string of chars
*Return: null
**/
void rev_string(char *s)
{
	int n;
	int i;
	int j;
	char swap;

	for (; s[n] != '\0'; n++)
	{
	}
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
	}
}
