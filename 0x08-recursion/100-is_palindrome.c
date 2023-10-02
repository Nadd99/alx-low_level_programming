#include "main.h"
int check_palindrome(char *s);
/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string
  * Return: int
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - Check if a string is palindrome
  * @s: the string
  * Return: int
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}
/**
  * _strlen_recursion - Get the length of a string
  * @s: the string
  * Return: int
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
