#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: string to be scanned
 * @accept: string comtaining the charecter to match
 *
 *Return: length of the initial substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
