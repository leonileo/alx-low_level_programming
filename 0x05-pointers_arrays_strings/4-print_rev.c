#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * print_rev - the function
 * @s: the character
 * Return: Always 0.
 */
void print_rev(char *s)
{
int l = strlen(s);
while (l--)
_putchar(s[l]);
_putchar('\n');
}
