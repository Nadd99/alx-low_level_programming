#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0(success)
 */
int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		if (ch == 101 || ch == 113)
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	printf("\n");
	return (0);
}
