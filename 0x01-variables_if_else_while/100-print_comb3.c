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

	for (n = 47 ; n <= 58 ; n++)
	for (m = 47 ; m <= 58 ; m++)
	{
		if (n == m)
		{
			n++;
			m++;
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
