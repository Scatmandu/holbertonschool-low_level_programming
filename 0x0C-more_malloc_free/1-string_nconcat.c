#include "holberton.h"
/**
*
*
*
*
*
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		s3 = malloc(sizeof(char) * (i + j + 1));

		if (s3 != NULL)
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
		else
		{
			return (NULL);
		}
	}
	else
	{
		s3 = malloc(sizeof(char) * (i + n + 1));

		if (s3 != NULL)
		{
			for (i = 0; s1[i] != '\0'; i++, j++)
			{
				s3[i] = s1[i];
			}
			for (j = 0; j < n; j++, i++)
			{
				s3[i] = s2[j];
			}
		}
		else
		{
			return (NULL);
		}
	}
return (s3);
}
