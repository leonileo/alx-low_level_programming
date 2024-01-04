#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 0(Success) or -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
