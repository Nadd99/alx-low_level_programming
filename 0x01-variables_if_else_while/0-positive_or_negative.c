#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entery point for all programs
 *
 * Discription: for every exe tells if is n positive, zero or negative
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n, n");
	}
	else if (n == 0)
	{
		printf("%d is zero\n, n");
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
