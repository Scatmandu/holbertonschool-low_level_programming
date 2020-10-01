#include "holberton.h"
/**
*reverse_array- entry point
*description: reverses the content of an array of ints
*@a: an array
*@n: number of elements in array
*Return: null
**/
void reverse_array(int *a, int n)
{
	int i, rev;

	n = n - 1;
	for (i = 0; i < n; i++, n--)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
