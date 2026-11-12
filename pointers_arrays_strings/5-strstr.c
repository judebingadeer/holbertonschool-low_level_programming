#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring
 * @haystack: String to search
 * @needle: Substring to find
 *
 * Return: Pointer to the match, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0' && haystack[i + j] != '\0'
		       && haystack[i + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
			return (haystack + i);

		i++;
	}

	return (NULL);
}
