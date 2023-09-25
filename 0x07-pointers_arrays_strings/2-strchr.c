#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a specific charecter in a string
 *
 * @s: the string to be scanned
 * @c: the charecter to be located
 *
 * Return: a pointer to the first occurence of the charecter in the string
 *         else NULL
 */
char *_strchr(char *s, char c)
{
	for(; *s != '\0'; s++)
		if (*s == c)
			return (char *) s;
	return NULL;
}
