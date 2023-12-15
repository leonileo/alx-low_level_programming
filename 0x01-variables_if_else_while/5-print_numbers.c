#include <stdio.h>

/**
 * main - print all single digit numbers starting from 0
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%i", n);
	}
	putchar('\n');

	return (0);
}
