#include "function_pointers.h"
/**
*print_name- prints name through function pointer
*@name: name to print
*@f: pointer to function
*Return: void
**/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(f)(name);
}
