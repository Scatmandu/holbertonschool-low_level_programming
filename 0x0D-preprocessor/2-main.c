#include "holberton.h"
/**
*
*
*
**/
int main(void)
{
	char *ptr = __FILE__;
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		putchar(ptr[i]);
	}
putchar('\n');
return (0);
}
