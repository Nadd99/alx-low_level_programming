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
		putchar(n);
		putchar(m);
		if (n == m)
		{
			n++;
			m++;
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
