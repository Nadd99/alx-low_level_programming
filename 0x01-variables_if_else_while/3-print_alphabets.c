#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 (success)
 */
int main(void)
{
	char up;
	char low;

	for (up = 97 ; up <= 122 ; up++)
	{
		putchar(up);
	}
	for (low = 65 ; low <= 90 ; low++)
	{
		putchar(low);
	}
	printf("\n");
	return (0);
}
