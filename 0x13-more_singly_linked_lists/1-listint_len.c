#include "lists.h"

/**
 * listoin_len - A function that return the number of elements in a linked list
 * @h: A linked list of type listint_t to traverse
 *
 * Return: A number of nodes
 */

size_t listint_len(const listint_t *h)
{

	size_t num = 0;

	while (h)
	{
	num++;
	h = h->next;
	}
	return (num);
}
