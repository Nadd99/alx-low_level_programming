#include "main.h"
#include <stdlib.h>
#include "stdio.h"

/**
  * flip_bits - ...
  * @n: ...
  * @m: ...
  * Return: ...
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, nflips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
