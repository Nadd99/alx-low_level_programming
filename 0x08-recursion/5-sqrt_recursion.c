#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion - natural square root of a number
  * @n: number
  * Return: int sqrt
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - natural square root
  * @n: number
  * @i: iteratation number
  * Return: int sqrt
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
