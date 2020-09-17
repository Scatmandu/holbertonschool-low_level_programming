#include <stdio.h>
/**
* main- void
* description: prints lower and uppercase alphabet then newline
* Return: 0
**/
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (a = 65; a <= 90; a++)
	{
		putchar(a);
	}
putchar('\n');
return (0);
}
