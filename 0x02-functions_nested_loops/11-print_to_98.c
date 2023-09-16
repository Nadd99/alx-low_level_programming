#include "main.h"
/**
 * print_to_98: prints all numbers from n to 98
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_puchar(i);
		_putchar(',');
		_putchar(' ');
		if (i == 98)
		{
			break;
		}
	}
	_putchar('\n');
}
