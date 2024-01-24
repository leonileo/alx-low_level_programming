#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 Success
*/

int main(void)
{
int letter;
int n = '\n';
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar(n);
return (0);
}
