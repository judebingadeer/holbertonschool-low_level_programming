#include <stdio.h>

/**
 * row_sum - Calculates the sum of one multiplication table row
 * @row: Row number
 * @cols: Number of columns
 *
 * Return: Sum of the row
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return sum;
}

/**
 * total_sum - Calculates the total sum of all rows
 * @rows: Number of rows
 * @cols: Number of columns
 *
 * Return: Total sum
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;
	int current = 0;

	for (r = 1; r <= rows; r++)
	{
		current = row_sum(r, cols);
		total += current;
	}

	return total;
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return 0;
}
