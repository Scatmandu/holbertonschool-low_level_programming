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
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
		len1++;
	}
	if (s2 == NULL)
	{
		s2 = "";
		len2++;
	}
	for (i = 0; s1[i] != '\0'; i++, len1++)
	{}
	for (j = 0; s2[j] != '\0' && j < n; j++, len2++)
	{}
	s3 = malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
	{
		s3[i] = s2[j];
	}
return (s3);
}
