#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: destitation where src will be copied
 * @src: the string to be copied
 * @n: number of charecters to be copied
 *
 * Return: updated string after copy, pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
