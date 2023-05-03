#include "lists.h"

/**
 * add_nodeint - A function adds a new node at the beginning of a linked list.`
 * @head: Pointing to the first node in the list
 * @n: used to determine a new node.
 *
 * Return: a pointer to the new node, or NULL if not successful
 */
listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
