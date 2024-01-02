#include "main.h"
/**
 * puts_half - prints the last half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int len, i, j;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (j = (len - 1) / 2; j < len - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}

	_putchar('\n');
}
