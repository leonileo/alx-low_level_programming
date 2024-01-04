#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @str: a pointer
 *
 * Return: a string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		i++;
	}

	return (str);
}
