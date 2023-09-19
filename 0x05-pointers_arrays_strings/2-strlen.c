#include" main.h"
/**
 * _strlen - returns length of string
 * @len: string to be counted
 * Return: lenght
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0' ; s++)
	{
		len++;
	}
	return (len);
}
