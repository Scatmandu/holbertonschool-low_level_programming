#include <stdio.h>
/**
*main- entry point
*description: prints 1-100, unless n%3=0, n%5=0, or n%3 and n%5=0
*Return: 0
**/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((n % 5 || n % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
		if (n == 100)
		{
			putchar('\n');
		}
	}
return (0);
}
