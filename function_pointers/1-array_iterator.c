#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each array element
 * @array: Array of integers
 * @size: Number of elements in the array
 * @action: Pointer to the function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
