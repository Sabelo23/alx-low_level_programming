#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function that add new node at beginning of linked list
 * @head: a double pointer to the list_t list
 * @str: a new string to add to the node
 *
 * Return: the address of the new element or NULL if not successful
 */
list_t *add_node(list_t **head, const char *str)
{
	
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
