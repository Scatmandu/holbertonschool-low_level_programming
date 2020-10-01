#include "holberton.h"
/**
*_strcmp- entry point
*description: compares the lengths of two strings
*@s1: a string
*@s2: a string
*Return: negative int, positive int, or 0
**/
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	}
return (0);
}
