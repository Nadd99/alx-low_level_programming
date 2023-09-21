#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: destination string
  * @src: source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
