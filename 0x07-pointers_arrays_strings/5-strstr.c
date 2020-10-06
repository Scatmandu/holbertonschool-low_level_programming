#include "holberton.h"
/**
*_strstr- entry point
*@haystack: string to find needle in
*@needle: string to look for in haystack
*Return: matching part or null
**/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle[0] == '\0')
	{
		return ('\0');
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			return (haystack + i);
		}
		else
		{
			return ('\0');
		}

	}

}
