#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: destination value
  * @src: source value
  * @n: limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;

	while (dest[len])
	{
		len++;
	}

	while (j < n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}

	dest[len + n + 1] = '\0';

	return (dest);
}
