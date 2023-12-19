#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_half1, f1_half2, f2_half1, f2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);
		f1 = f2;
		f2 = sum;
	}

	f1_half1 = f1 / 10000000000;
	f2_half1 = f2 / 10000000000;
	f1_half2 = f1 % 10000000000;
	f2_half2 = f2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = f1_half1 + f2_half1;
		half2 = f1_half2 + f2_half2;
		if (f1_half2 + f2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		f1_half1 = f2_half1;
		f1_half2 = f2_half2;
		f2_half1 = half1;
		f2_half2 = half2;
	}
	printf("\n");
	return (0);
}
