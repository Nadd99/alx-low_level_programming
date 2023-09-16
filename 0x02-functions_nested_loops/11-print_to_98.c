#include "main.h"
/**
 * print_to_98: prints all numbers from n to 98
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int n;

	for (n ; n <= 98; n++)
	{
		_puchar(n);
		_putchar(',');
		if (n == 98)
		{
			break;
		}
	}
	_putchar('\n);
}
