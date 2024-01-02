#include <stdio.h>
#include "main.h"
/**
 * swap_int - A function that changes the values
 * @a: first value
 * @b: second value
 * Return: always 0.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
