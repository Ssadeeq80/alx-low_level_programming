#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list_t list
 *
 * Return: Number of nodes in list_t list
 */
size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes_count++;

		/* Move to next node */
		h = h->next;
	}

	return (nodes_count);
}

