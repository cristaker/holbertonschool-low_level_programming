#include "variadic_functions.h"
/**
 * print_all - function
 * @format: constant
 * @...: elipsis
 * Return: void
 * **/

void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0, j = 0;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		j = i + 3;
		while (format[j] && (format[j] == 'c' || format[j] == 'i' || format[j] == 's'
					|| format[j] == 'f'))
		{
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
