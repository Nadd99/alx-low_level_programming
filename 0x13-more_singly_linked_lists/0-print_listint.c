#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print list elements
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			num++;
		}
	}
	return (num);
}
