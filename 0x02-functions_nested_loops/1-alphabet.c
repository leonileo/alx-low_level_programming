#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0.
 */


void print_alphabet(void)
{
char letter;
char new_line = '\n';

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar(new_line);
}
