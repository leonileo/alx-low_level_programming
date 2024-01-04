#include "main.h"

/**
 * *_strncat - Concatenates two strings using at most an inputted number of
 * bytes from src.
 * @dest: a pointer to a string
 * @src: a pointer to string
 * @n: the number of bytes from src to be appended to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
