#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size  of the characters
 * @c: the charachter to be printed
 * Return: a pointer to array
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
arr = malloc(size * sizeof(char));
if (arr == NULL || size == 0)
{
return (NULL);
}
i = 0;
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}

