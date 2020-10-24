#include "variadic_functions.h"
/**
*print_strings- prints strings separated by ", "
*@n: number of strings to print
*@separator: string containing ", "
*Return: void
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va_string;

	va_start(va_string, n);
	for (i = 0; i < n; i++)
	{
		if (va_string != NULL)
		{
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", va_arg(va_string, char *));
				printf("%s", separator);
			}
			else
				printf("%s", va_arg(va_string, char *));
		}
		else
			printf("(nil)");
	}
printf("\n");
va_end(va_string);
}
