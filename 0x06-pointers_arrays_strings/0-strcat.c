#include "holberton.h"
/**
*_strcat- entry point
*description: concatenates two strings
*@dest: string to copy to
*@src: string to be copied
*Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
dest[i + 1] = '\0';
return (dest);
}
