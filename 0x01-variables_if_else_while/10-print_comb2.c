#include <stdio.h>
/**
* main- void
* description: prints 00-99 separated by a comma and space
* Return: 0
**/
int main(void)
{
	int n1, n2;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			putchar(n1);
			putchar(n2);
			if ((n1 != '9') || (n2 != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
