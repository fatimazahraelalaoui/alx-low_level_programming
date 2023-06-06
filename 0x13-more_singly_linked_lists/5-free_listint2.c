#include "lists.h"

/**
 * free-listint2 - frees a linkes list
 * @head: pointer to point
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;
	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}
