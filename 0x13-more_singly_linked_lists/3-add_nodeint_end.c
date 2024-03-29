#include "lists.h"

/**
 * add_nodeint_end - A function that adding node at end of linked list
 * @head: pointer that points to first element in the list
 * @n: Information to be inserted in new element
 *
 * Return: A pointer to new node, or NULL if not successful
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
