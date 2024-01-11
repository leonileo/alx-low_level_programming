#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of a given number
 * @num: number
 * @root: root
 *
 * Return: if the number has a natural square root - the square root
 *	else -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: if n has a natural square root - tne natural square root of n
 *	else -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
