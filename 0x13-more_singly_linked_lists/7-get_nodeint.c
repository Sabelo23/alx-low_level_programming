#include "lists.h"

/**
 * get_nodeint_at_index - The function that return the node at certain in list
 * @head: The first node in linked list
 * @index: The index of the node to be returned
 *
 * Return: To pointer node we looking for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
