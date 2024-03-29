#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function that adds new node at the end of linked list
 * @head: a double pointer to list_t list
 * @str: a string to put in new node
 *
 * Return: an address of a new element or NULL if it not successful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	list_t *temp = *head;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
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
