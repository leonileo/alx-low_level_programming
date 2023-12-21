#include "main.h"
/**
 * print_triangle - prints a triangle using # character.
 * @size: the size of the triangle.
 */
void print_triangle(int size)
{
	int r, c, k;

	if (size <= 0)
		_putchar('\n');

	for (r = 0; r < size; r++)
	{
		for (c = size - r; c > 1; c--)
			_putchar(' ');

		for (k = r + c; k >= 1; k--)
			_putchar('#');

		_putchar('\n');
	}
}
