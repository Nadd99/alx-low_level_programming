#include "main.h"
/**
 * print_last_digit - entry
 *
 *@x: extract the last digit from x
 *
 * Return: value of last digit
 */
int print_last_digit(int x)
{
	int n;

	if (x < 0)
	{
		x = -x;
	}
	n = x % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
