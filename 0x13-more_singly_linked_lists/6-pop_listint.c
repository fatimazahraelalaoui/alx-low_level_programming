#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to point
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (number);
}
