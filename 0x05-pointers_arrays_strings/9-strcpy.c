#include "main.h"
/**
 * _strcpy - copy the string pointer from src to dest
 * @dest: the buffer storing the string copy.
 * @src: the source string
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
