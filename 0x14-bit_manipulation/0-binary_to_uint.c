#include "holberton.h"
/**
*
*
*
**/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int i;
	unsigned int result = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			num = 0;
		else if (b[i] == '1')
			num = 1;
		else
			return (0);
		result += num;
		if (b[i + 1] != '\0')
			result += result << 1;
	}
return (result);
}
