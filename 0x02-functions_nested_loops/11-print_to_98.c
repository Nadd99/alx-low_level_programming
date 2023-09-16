#include "main.h"
/**
 * print_to_98: prints all numbers from n to 98
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (i <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				_putchar('i');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar('i');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n ; i >= 98; i--)
		{
			if (i == 98)
			{
				_putchar('i');
				_putchar('\n');
			}
			else
			{
				_putchar('i');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
