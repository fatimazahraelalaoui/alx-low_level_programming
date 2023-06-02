#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *add_node_end - Adds a new node at the end of a list_t list
 * @head : Double pointer
 * @str : String to add
 * Return: Tthe address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nst;
	list_t *t = *head;
	unsigned int len;

	while (str[len])
		len++;
	
	nst = malloc(sizeof(list_t));
	if(!nst)
		return (NULL);

	nst->str = strdup(str);
	nst->len = len;
	nst->next = NULL;

	if(*head == NULL)
	{
		*head = nst;
		return (nst);
	}
	while (t->next)
		t = t->next;

	t->next = nst;

	return(nst);
}
		



