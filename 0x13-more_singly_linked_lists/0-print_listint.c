#include "lists.h"

/**
 * print_listint- A function that prints all elements of a linked list.
 * @h: A linked list of a type listint_t to print
 *
 * Return: a number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{

	size_t num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}
	return (num);
}
