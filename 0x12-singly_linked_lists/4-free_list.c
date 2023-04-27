#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Function that frees a linked list.
  * @head: The first node of linked list
  *
  * Return: Nothing
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
