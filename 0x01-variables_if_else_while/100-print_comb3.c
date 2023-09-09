#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0 ; n <= 9 ; n++)
	for (m = n + 1 ; m < 10 ; m++)
	{
		putchar((digit1 % 10) + '0');
		putchar((digit2 % 10) + '0');
		if (n == 56 && m == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
