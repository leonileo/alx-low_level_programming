#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: the maximum number of bytes to be copied from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
