#include "holberton.h"
/**
*_strpbrk- entry point
*@s: string to compare to
*@accept: string containing values to compare to s
*Return: matching string or null
**/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (s[0] == '\0' || accept[0] == '\0')
	{
		return ('\0');
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
return ('\0');
}
