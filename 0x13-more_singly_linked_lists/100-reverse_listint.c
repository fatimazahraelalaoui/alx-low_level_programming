#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to the first node
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = after;
	}

	*head = rev;

	return (*head);
}

