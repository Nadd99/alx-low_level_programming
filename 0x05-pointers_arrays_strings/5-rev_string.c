#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int x, i;
	char a;

	for (x = 0 ; s[x] != '\0' ; x++)
	for (i = 0 ; i < x / 2 ; i++)
	{
		a = s[i];
		s[i] = s[x - 1 - i];
		s[x - 1 - i] = a;
	}
}
