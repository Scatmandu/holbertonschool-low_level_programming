#include "holberton.h"
/**
**_strchr - entry point
*@s: string to print part of
*@c: point to begin returning at
*Return: either a string or NULL
**/
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return ('\0');
	}
	else
	{
		for (; *s != '\0'; i++)
		{
			if (s[i] == c)
			{
				return (s + i);
			}
		}
	}
return (NULL);
}
