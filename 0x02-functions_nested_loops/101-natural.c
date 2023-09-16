#include <stdio.h>
/**
 * main - entry function that print multiples of 3 and 5 up to 1024
 *
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			m += n;
		}
	}
	printf("%d\n", m);
	return (0);
}
