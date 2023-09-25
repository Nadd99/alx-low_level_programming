#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: scanned string
 * @accept:string containing the charcters to be matched
 * Return: a pointer the the charecter in s that matches charecters in accept
 *         else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s = s + a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
