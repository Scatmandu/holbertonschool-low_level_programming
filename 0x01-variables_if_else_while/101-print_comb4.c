#include <stdio.h>
/**
*main- entry point
*description: prints 00 to 99 with no duplicate nnumber combinations
*Return: 0
**/
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		j = i + 1;

		for (; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
