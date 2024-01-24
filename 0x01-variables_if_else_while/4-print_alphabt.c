#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 Success
*/

int main()
{
int letter;
int n = '\n';
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar(n);
return (0);
}
