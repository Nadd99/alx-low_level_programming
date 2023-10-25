#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - ...
  * @head: ...
  * Return: ...
  */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head)
	{
		while (head)
		{
			i += head->n;
			head = head->next;
		}
	}

	return (i);
}
