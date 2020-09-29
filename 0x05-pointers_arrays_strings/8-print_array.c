#include <stdio.h>
/**
*print_array- entry point
*description: prints array contents
*@a: an array
*@n: number of elements to print
*Return: null
**/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
printf("\n");
}
