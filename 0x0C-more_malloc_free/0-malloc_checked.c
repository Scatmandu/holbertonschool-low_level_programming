#include "holberton.h"

/**
*malloc_checked- checks to see if malloc succeeds
*@b: size of a malloc call
*Return: ptr
**/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		exit(98);
	}
}
