#include "holberton.h"
/**
*main- prints name of file used to compile
*Return: 0
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
