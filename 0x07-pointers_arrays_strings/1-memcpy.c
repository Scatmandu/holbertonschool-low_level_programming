#include "holberton.h"
/**
**_memcpy- entry point
*@dest: string to copy into
*@src: string to copy
*@n: amount of string to copy
*Return: dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
return (dest);
}
