#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: character to be tested
 * Return: 1
 */
int _isupper(int c)
{
	char c;

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}