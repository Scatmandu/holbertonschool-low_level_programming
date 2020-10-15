#include "holberton.h"
/**
*_calloc- cats two strings
*@nmemb: number of elements to populate new string with
*@size: size in bytes of each element
*Return: arr or NULL
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
	}
return (arr);
}
