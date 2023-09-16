#include <stdio.h>
/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int n = 0;
	long m = 1, k = 2, sum = k;

	while (k + m < 4000000)
	{
		k += m;

		if (k % 2 == 0)
			sum += k;

		m = k - m;

		++n;
	}

	printf("%ld\n", sum);
	return (0);
}
