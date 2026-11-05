#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0
 */
void times_table(void)
{
	int row, col, result;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			result = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			if (result >= 10)
				_putchar('0' + result / 10);
			_putchar('0' + result % 10);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
