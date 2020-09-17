#include <stdio.h>
/**
* main- void
* description: prints alphabet except e and q
* Return: 0
**/
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if ((a != 113) && (a != 101))
		{
			putchar(a);
		}
	}
putchar('\n');
return (0);
}
