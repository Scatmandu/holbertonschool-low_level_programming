#include <stdio.h>
/**
* main- void
* description: prints alphabet one letter per line
* Return: 0
**/
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
		putchar('\n');
	}
return (0);
}
