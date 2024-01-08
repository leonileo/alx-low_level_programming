#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area @src to @dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy from @src
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
