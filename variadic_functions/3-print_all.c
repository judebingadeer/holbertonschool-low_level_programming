#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints arguments according to their format
 * @format: String containing argument type specifiers
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *sep = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
				break;
			default:
				break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
