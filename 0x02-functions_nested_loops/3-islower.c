#include <stdio.h>
/**
 * _islower - checks if a character is lower or not
 * @c: the character to be checked
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
