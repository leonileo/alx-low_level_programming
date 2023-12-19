#include "main.h"
/**
 * print_sign - checks if number is negative or positive
 * @c: number to be checked
 *
 * Return: Always 0.
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
