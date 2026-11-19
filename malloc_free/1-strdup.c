#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a newly allocated copy of a string
 * @str: String to duplicate
 *
 * Return: Pointer to duplicate, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i;
	unsigned int length;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	copy = malloc((length + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		copy[i] = str[i];

	return (copy);
}
