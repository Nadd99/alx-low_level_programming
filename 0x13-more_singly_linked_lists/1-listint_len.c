#include "lists.h"
#include <stdio.h>

/**
 * listint_len - number off elements in list
 * @h: head of linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			num++;
		}
	}

	return (num);
}
