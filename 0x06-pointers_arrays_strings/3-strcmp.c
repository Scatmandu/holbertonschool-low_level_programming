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
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (i < j)
	{
		return (*s1 - *s2);
	}
	else if (j < i)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (0);
	}
}
