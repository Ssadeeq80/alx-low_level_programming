#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list_t list
 * @h: The list_t list
 *
 * Return: The number of elements in @h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

