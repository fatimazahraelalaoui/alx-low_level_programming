#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nint;
	listint_t *t = *head;

	nint = malloc(sizeof(listint_t));
	if (!nint || !head)
		return (NULL);

	nint->n = n;
	nint->next = NULL;

	if (idx == 0)
	{
		nint->next = *head;
		*head = nint;
		return (nint);
	}

	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nint->next = t->next;
			t->next = nint;
			return (nint);
		}
		else
			t = t->next;
	}
	return (NULL);
}


