#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - ...
  * @head: ...
  * @index: ...
  * Return: void
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	if (head)
	{
		while (head)
		{
			if (num == index)
				return (head);

			head = head->next;
			num++;
		}
	}

	return (NULL);
}
