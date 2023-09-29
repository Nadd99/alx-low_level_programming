#include "main.h"
#include <stdio.h>

/**
  * is_prime_number - if a number is prime
  * @n: number
  * Return: int
  */
int is_prime_number(int n)
{
	return (check_if_prime(n, 1));
}

/**
  * check_if_prime - if number is prime
  * @n: number to be checked
  * @i: teration times
  * Return: 1 for prime, else 0
  */
int check_if_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_if_prime(n, i + 1));
}
