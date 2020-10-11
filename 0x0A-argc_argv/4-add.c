#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main- multiplies the value of two arguments
*@argc: number of arguments
*@argv: array containing values of argc
*Return: 0
**/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])) != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
printf("%d\n", sum);
return (0);
}
