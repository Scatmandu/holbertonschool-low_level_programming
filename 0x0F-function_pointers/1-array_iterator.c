#include "function_pointers.h"
/**
*array_iterator- prints each element of an array
*@array: array of ints
*@size: size of array
*@action: action to be taken on array indices
*Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				(*action)(array[i]);
			}
		}
	}
}
