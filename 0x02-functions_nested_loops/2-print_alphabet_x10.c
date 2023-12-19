#include "main.h"
/**
 * print_alphabet_x10 - printing alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
