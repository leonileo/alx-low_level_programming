#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: a pointer to an array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
