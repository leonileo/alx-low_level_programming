#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Given number
 *
 * Return: if n > 0, the factorial of n else returns -1
 */
int factorial(int n)
{
	int fac = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	fac *= factorial(n - 1);

	return (fac);
}
