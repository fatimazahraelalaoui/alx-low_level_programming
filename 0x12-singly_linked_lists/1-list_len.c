#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Print the number of elements in a linked
 * @h : Pointer to the list
 * Return: The number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
