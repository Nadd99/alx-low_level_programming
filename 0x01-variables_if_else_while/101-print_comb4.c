#include <stdio.h>
/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, m, y;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (y = m + 1; y < 10; y++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((y % 10) + '0');

				if (n == 7 && m == 8 && y == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
