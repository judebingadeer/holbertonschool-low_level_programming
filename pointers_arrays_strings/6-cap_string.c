#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	int j;
	int capitalize;
	char separators[] = " \t\n,;.!?\"(){}";

	i = 0;
	capitalize = 1;

	while (str[i] != '\0')
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');

		capitalize = 0;
		j = 0;

		while (separators[j] != '\0')
		{
			if (str[i] == separators[j])
			{
				capitalize = 1;
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
