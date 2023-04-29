#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *size_t print_list - function that prints all elements of a linked list.
 * @h:a pointer to list_t to print
 *
 * Return: number of nodes to be printed
 *
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
	if (!h->str)
	printf("[0](nil)\n");
	else
	printf("[%u]%s/n", h->len, h->str);
	h = h->next;
	s++;
	}
	return (s);
}
