#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all integers from n to 98
 * @n: Starting integer
 */
void print_to_98(int n)
{
	int i;

	i = n;
	while (i != 98)
	{
		printf("%d, ", i);

		if (i < 98)
			i++;
		else
			i--;
	}
	printf("98\n");
}
