#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that prints number of elements in linked list
 * @h: a pointer to list_t list
 *
 * Return: the number of elements in pointer h
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
