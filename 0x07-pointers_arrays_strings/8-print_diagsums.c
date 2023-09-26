#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of integer square matrix
 * @a: a matrix
 * @size: matrix's size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, firstsum = 0, secondsum = 0;

	for (x = 0; x < size; x++)
	{
		firstsum += a[(size + 1) * x];
		secondsum += a[(size - 1) * (x + 1)];
	}
	printf("%d, %d\n", firstsum, secondsum);
}
