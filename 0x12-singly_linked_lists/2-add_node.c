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
	list_t *newst;
	unsigned int len = 0;

	while (str[len])
		len++;

	newst = malloc(sizeof(list_t));
	if (!newst)
		return (NULL);

	newst->str = strdup(str);
	newst->len = len;
	newst->next = (*head);

	return (*head);
}

