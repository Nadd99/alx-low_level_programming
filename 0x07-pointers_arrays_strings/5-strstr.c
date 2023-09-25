#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the main string to be examined
 * @needle: the sub-string to be searched in string
 * Return: a pointer to the first charecter found, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int n = 0, m = 0;

	while (haystack[n])
	{
		while (needle[m])
		{
			if (haystack[n + m] != needle[m])
			{
				break;
			}

			m++;
		}

		if (needle[m] == '\0')
		{
			return (haystack + n);
		}

		n++;
	}

	return ('\0');
}
