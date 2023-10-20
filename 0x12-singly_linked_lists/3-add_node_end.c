#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
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
 * add_node_end - adds a new node at the end of a list_t list
 * @head: og linked list
 * @str: string to be added
 * Return: addresss of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

   new = malloc(sizeof(list_t));
   if (new == NULL)
     return (NULL);

   new->str = strdup(str);
   new->len = _strlen(str);
   new->next = NULL;

   if (*head == NULL)
     *head = new;
   else
   {
     last = *head;
     while (last->next != NULL)
       last = last->next;
     last->next = new;
   }

   return (*head);
}
