#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value included in the array
 * @max: Maximum value included in the array
 *
 * Return: Pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	size_t count;
	size_t i;

	if (min > max)
		return (NULL);

	count = (size_t)((unsigned int)max - (unsigned int)min) + 1;

	if (count == 0 || count > SIZE_MAX / sizeof(int))
		return (NULL);

	array = malloc(count * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		array[i] = (int)((unsigned int)min + (unsigned int)i);

	return (array);
}
