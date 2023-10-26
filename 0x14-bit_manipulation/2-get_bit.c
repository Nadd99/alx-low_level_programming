#include "main.h"
#include <stdio.h>
/**
  * get_bit - value of a bit at a given index
  * @n: ...
  * @index: index
  * Return: ...
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_c = 0;

	while (n)
	{
		if (num_c == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		num_c++;
	}

	if (index > num_c && index < 63)
		return (0);

	return (-1);
}
