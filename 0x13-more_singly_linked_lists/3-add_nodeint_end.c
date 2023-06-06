#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer of type list to point
 * @n: node to add
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nint;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	
	nint->n = n;
	nint->next = NULL;

	if (*head == NULL)
	{
		*head = nint;
		return (nint);
	}

	while (t->next)
		t = t->next;

	t->next = nint;

	return (nint);
}


