#include "holberton.h"
/**
*_strspn- entry point
*@s: string to compare accept to
*@accept: string to compare s to
*Return: k
**/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	if (s[0] == '\0' || accept[0] == '\0')
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				i++;
			}
		}
	}
return (k);
}
