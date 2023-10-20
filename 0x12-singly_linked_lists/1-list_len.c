#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - function that prints out the number of elements in list
 * @h: a linked list
 *
 * Return: int, number of elements
 *
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
