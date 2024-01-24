#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 success
*/

int main(void)
{
char a;
char b;
char n = '\n';
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (b = 'A'; b <= 'Z'; b++)
{
putchar(b);
}
putchar(n);

return (0);
}
