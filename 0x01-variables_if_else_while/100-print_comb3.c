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
	for (m = n +1 ; m <= 9 ; m++)
	{
		if (n == 8 && m ==9)
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
