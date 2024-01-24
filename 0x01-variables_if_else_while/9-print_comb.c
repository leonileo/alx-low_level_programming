#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 success
*/

int main(void)
{
int n = 0;
int l = '\n';
int c = ',';

while (n < 10)
{
putchar(48 + n);
if (n != 9)
{
putchar(c);
}
n++;
}

putchar(l);

return (0);
}
