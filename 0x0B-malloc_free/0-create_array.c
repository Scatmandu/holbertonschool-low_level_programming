#include "holberton.h"
/**
*create_array- creates array of size length populated with a specific character
*@size: size of the array
*@c: char to populate it with
*Return: str
**/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(sizeof(char) * size);
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i <= size; i++)
			{
				str[i] = c;
			}
		}
	}
return (str);
}
