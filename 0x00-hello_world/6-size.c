#include <stdio.h>

/**
 * main - Entry point
 * return: (0) Always;
 */

char c = sizeof(char);
int i = sizeof(int);
long int l = sizeof(long int);
long long int lli = sizeof(long long int); 
float f = sizeof(f);

int main(void)
{
printf("Size of a char: %d byte(s)\n", c);
printf("Size of an int: %d byte(s)\n", i);
printf("Size of a long int: %ld byte(s)\n", l);
printf("Size of a long long int: %lld byte(s)\n", lli);
printf("Size of a float: %1.f byte(s)\n", f);
return (0);
}
