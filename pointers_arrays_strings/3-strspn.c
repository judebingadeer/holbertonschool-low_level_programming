#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to examine
 * @accept: String containing accepted characters
 *
 * Return: Number of accepted bytes at the beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int found;

	i = 0;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}

		if (found == 0)
			break;

		i++;
	}

	return (i);
}
