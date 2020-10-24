#include "variadic_functions.h"
/**
*print_numbers- prints n amount of numbers then \n
*@n: number of ints to print
*@separator: string containing "' "
*Return: void
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va_int;
	unsigned int i;

	va_start(va_int, n);
	if (n == 0)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && separator != NULL)
		{
			printf("%d", va_arg(va_int, int));
			printf("%s", separator);
		}
		else
		{
			printf("%u\n", va_arg(va_int, int));
		}
	}
va_end(va_int);
}
