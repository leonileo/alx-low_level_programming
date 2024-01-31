#include <stdio.h>

/**
 * main - Entry point
 *
 * Result: Always 0 success
*/

int concat(int str1, int str2);

int main()
{
int name = 2;
int fName = 6;

const int full_name = concat(name,fName);

printf("Hello, %d", full_name);
return (0);
}

int concat(int str1, int str2)
{
  int full_name = str1 + str2;

  return full_name;
}
  
