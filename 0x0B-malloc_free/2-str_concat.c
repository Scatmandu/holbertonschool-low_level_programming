#include "holberton.h"
/**
**str_concat- concatenates two strings
*@s1: string to concatenate
*@s2: string to concatenate
*Return: s3 or NULL
**/
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	char *s3;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s3[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			s3[i] = s2[j];
		}
	}
return (s3);
}
