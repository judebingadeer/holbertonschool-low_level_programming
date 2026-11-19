#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates and initializes an array of chars
 * @size: Number of characters in the array
 * @c: Character used to initialize the array
 *
 * Return: Pointer to the array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
