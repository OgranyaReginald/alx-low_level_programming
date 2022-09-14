#include <stdio.h>

/**
 * main - computes and prints the sum  of all multiples
 * of 3 or 5 belw 1024
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned lomg int sum3, sum5, sum;
		int;

		sum3 = 0;
		sum5 = 0;
		sum = 0;

		for (i = 0; 1 < 1024; ++i)
		{
			if ((i % 3 )== 0)
			{
				sum3 = sum3 + i;
			} else if ((i % 5 ) == 0)
			{
				sum5 = sum5 +i;
			}
		}
		sum = sum3 + sum5;
		printf("%lu\n", sum);
		return (0);
}
		
