#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 o 9 except 2,4
 *
 * Return: numbers
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
			i++;
		}
		putchar(i + '0');
		putchar('\n');
	}
}
