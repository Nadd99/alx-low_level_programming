#include <stdio.h>
#include "main.h"
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
	int n = 0;
	int m;

	while (s[n])
	{
		n++;
	}
	for (m = 0; m <= n; m++)
	{
		if (c == s[m])
		{
			s = m++;
			return (s);
		}
	}
	return ('\0');
}
