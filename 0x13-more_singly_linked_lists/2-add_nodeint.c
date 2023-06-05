#include "lists.h"
#include <string.h>

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to point
 * @n: number to add
 * Return:  address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
