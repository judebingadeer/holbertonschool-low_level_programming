#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: Number of rows and columns
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
