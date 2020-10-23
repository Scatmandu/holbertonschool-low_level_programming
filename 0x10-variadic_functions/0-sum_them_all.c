#include "variadic_functions.h"
/**
*sum_them_all- sums a variable number of args
*@n: number of args to sum
*Return: sum or 0
**/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum;
	unsigned int i;

	va_start(valist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
return (sum);
}
