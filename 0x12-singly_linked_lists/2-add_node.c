#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - Adds a new node at the beginning of a list_t list
 * @head : Doubble pointer to the list
 * @str : String to add
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nst;
	unsigned int len = 0;

	while (str[len])
		len++;

	nst = malloc(sizeof(list_t));
	if (!nst)
		return (NULL);

	nst->str = strdup(str);
	nst->len = len;
	nst->next = (*head);
	(*head) = nst;

	return (*head);
}

