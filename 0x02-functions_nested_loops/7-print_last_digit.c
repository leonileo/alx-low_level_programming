#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - the function that gets us the last digit
 * @c: the number to restract the last digit from
 *
 * Return: always 0.
 */
int print_last_digit(int c)
{
int lastLetter = c % 10;
if (lastLetter < 0)
{
lastLetter *= -1;
}
_putchar(lastLetter + '0');
return (lastLetter);
}
