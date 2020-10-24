#include "variadic_functions.h"
/**
*print_all- prints different types
*@format: format specifier
*Return: void
**/
void print_all(const char * const format, ...)
{
	va_list type;
	int i = 0;
	int j;
	char *str;

	va_start(type, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(type, int));
			break;
		case 'i':
			printf("%d", va_arg(type, int));
			break;
		case 'f':
			printf("%f", va_arg(type, double));
		case 's':
			str = va_arg(type, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
			printf("%s", str);
			break;
		default:
			j++;
			break;
		}
		if (format[i + 1] != '\0' && j != 1)
			printf(", ");
		i++;
	}
printf("\n");
va_end(type);
}
