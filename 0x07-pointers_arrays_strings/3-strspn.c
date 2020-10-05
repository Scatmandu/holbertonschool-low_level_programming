#include "holberton.h"
/**
*_strspn- entry point
*@s: string to compare accept to
*@accept: string to compare s to
*Return: k
**/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				i++;
			}
			else if (s[i] == '\0' && accept[j] == '\0')
			{
				return (0);
			}
		}
	}
return (k);
}
