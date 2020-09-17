#include <stdio.h>
/**
* main- void
* description: prints all numbers of base 16
* Return: 0
**/
int main(void)
{
	int a, n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
putchar('\n');
return (0);
}
