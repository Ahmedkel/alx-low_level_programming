#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separater = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separater, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separater, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separater, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separater, str);
					break;
				default:
					i++;
					continue;
			}
			separater = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
