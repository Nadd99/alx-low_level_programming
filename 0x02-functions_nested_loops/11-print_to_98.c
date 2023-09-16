#include "main.h"
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: initial number
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar('n');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar('n');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar('n');
				_putchar('\n');
			}
			else
			{
				_putchar('n');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
