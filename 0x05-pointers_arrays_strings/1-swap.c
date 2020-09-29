#include "holberton.h"
/**
*swap_int- entry point
*description: swaps values of two ints
*@a: an int
*@b: an int
*Return: null
**/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
