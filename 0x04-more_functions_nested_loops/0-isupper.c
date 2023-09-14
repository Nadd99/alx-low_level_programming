#include "main.h"
/**
 * int _isupper(int c) - checks for uppercase characters
 * @c: character to be tested
 * Return: 1 
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
