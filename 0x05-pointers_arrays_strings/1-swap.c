#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: first parameter to be swapped
 *
 * @b: second paramter to be swapped
*/

void swap_int(int *a, int *b)
{
int a1 = *a;
int b1 = *b;

*a = b1;
*b = a1;
}
