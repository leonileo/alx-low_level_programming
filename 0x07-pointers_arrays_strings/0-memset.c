#include "main.h"

/**
 * _memset - fills the memory with a constant byte.
 * @s: a pointer to the memory area to be filled.
 * @b: constant byte
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
