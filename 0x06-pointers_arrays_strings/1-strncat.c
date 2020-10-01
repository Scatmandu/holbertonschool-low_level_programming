#include "holberton.h"
/**
*_strncat- entry point
*description: cats two strings plus n
*@dest: string appended
*@src: string to copy
*@n: extra bit copied
*Return: dest
**/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
dest[i + 1] = '\0';
return (dest);
}
