#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of lines to print
 */
void print_diagonal(int n)
{
	int row;
	int space;

	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
