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

	for (n = 48 ; n <= 57 ; n++)
	for (m = 48 ; m <= 57 ; m++)
	{
		if (n == m)
		{
			continue;
		}
		putchar(n);
		putchar(m);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
