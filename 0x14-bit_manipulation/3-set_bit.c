#include "main.h"
#include "stdio.h"

/**
  * set_bit - ...
  * @n: number
  * @index: index
  * Return: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
