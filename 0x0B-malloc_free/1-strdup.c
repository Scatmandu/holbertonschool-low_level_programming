#include "holberton.h"
/**
**_strdup- copies a string
*@str: string to copy
*Return: new
**/
char *_strdup(char *str)
{
	unsigned int i;
	char *new;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	new = malloc(sizeof(char) * (i + 1));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			new[i] = str[i];
		}
	}
return (new);
}
