#include "main.h"
/**
 * swap_int - function that swaps values of two integers
 * @a: int to be swaped
 * @b: int to be swaped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
