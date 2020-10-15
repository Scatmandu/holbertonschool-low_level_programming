#include "holberton.h"
/**
*string_nconcat- cats n characters of s2 to s1
*@s1: string to cat to
*@s2: string to cat
*@n: number of chars from s2 to cat
*Return: s3
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0, j;

	for (j = 0; s2[j] != '\0'; j++)
	{}
	if (n >= j)
	{
		s3 = malloc(sizeof(char) * (i + j + 1));
		if (s3 == NULL)
			return (NULL);
		for (; s1[i] != '\0'; i++)
			s3[i] = s1[i];
		for (; s2[j] != '\0' &&  j < n; j++, i++)
			s3[i] = s2[j];
	}
	else
	{
		s3 = malloc(sizeof(char) * (i + n + 1));
		if (s3 != NULL)
		{
			for (i = 0; s1[i] != '\0'; i++)
				s3[i] = s1[i];
			for (j = 0; j < n; j++, i++)
				s3[i] = s2[j];
		}
		else
			return (NULL);
	}
return (s3);
}
