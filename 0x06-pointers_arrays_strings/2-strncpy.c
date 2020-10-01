#include "holberton.h"
/**
*_strncpy- entry point
*description: fills up dest with src then '\0'
*@dest: storage string
*@src: string to copy
*@n: number of '\0'
*Return: dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
return (dest);
}
