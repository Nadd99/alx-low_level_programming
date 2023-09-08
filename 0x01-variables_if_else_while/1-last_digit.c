#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry of program
 *
 * Description: print last digit
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dig = n % 10;
	if (dig > 5)
	{
		printf("Last digit of %d is %d and is greater that 5", n, dig);
	}
	else if (dig == 0)
	{
		printf("Last digit of %d is %d and is 0", n, dig);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, dig);
	}
	return (0);
}