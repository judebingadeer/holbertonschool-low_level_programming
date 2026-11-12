#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any accepted byte
 * @s: String to search
 * @accept: String containing accepted characters
 *
 * Return: Pointer to first matching byte, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}

		i++;
	}

	return (NULL);
}
