#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}

/**
 * add_node - adds a new node at the beginning of the list
 * @str: string to be added to list
 * @head: og linked list
 * Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
		{
			return (NULL);
		}

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;
		*head = temp;

		return (temp);
	}
	return (0);
}
