#include "holberton.h"
/**
**_memset- entry point
*@s: pointer to a string
*@b: letter to populate string with
*@n: amount of b's to copy to s
*Return: s
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
