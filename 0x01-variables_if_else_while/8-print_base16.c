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
int a;

while (n <= 10)
{
if (n > 9)
{
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
}
else
{
putchar(48 + n);
}

n++;

}

putchar(l);

return (0);
}
