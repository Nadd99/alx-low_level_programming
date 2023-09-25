#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: Starting address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled starting from s
 *
 * Return: string with memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
