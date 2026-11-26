#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings separated by a string
 * @separator: String to print between strings
 * @n: Number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (i > 0 && separator != NULL)
			printf("%s", separator);

		printf("%s", str == NULL ? "(nil)" : str);
	}

	va_end(args);
	printf("\n");
}
