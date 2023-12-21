#include "main.h"
/**
 * _isdigit - checks for digit between 0-9
 * @c: the number to be checked
 *
 * Return: 1 if true else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
